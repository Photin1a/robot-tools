#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QFile>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    log_ = new QPlainTextEdit();
    terminal_ = new QWidget();//todo delete

    InitUi();
    SetDefaultSize();

    auto num = LoadPlugins();
    printf("load %d plugins\n",num);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::SetDefaultSize(){
    ui->VSpliiter->setSizes({this->height()-220,220});
    ui->HSpliiter->setSizes({220,this->width()-220});
}

//Terminal log LeadTree
void MainWindow::InitUi(){
    //terminal
    Tabs_.emplace("terminal",ui->Tab->addTab(terminal_, "terminal"));
    QObject::connect(ui->new_terminal,&QAction::triggered,[this](){
        ui->Tab->show();
        if(nullptr == this->terminal_)return;
        if("terminal" == ui->new_terminal->text()){
            ui->Tab->setTabVisible(Tabs_.at("terminal"),true);
            ui->new_terminal->setText("close terminal");
        }
        else if("close terminal" == ui->new_terminal->text()){
            ui->Tab->setTabVisible(Tabs_.at("terminal"),false);
            ui->new_terminal->setText("terminal");
        }
        bool is_vis = false;
        for(auto &tab_t:Tabs_){
            is_vis = is_vis||ui->Tab->isTabVisible(tab_t.second);
        }
        if(true == is_vis)ui->Tab->show();
        else ui->Tab->hide();
    });

    //log
    Tabs_.emplace("log",ui->Tab->addTab(log_, "log"));
    QTextCharFormat format;
    format.setForeground(QBrush(QColor("white")));
    log_->setCurrentCharFormat(format);
    QObject::connect(ui->log,&QAction::triggered,[this](){
        ui->Tab->show();
        if(nullptr == this->log_)return;
        if("log" == ui->log->text()){
            ui->Tab->setTabVisible(Tabs_.at("log"),true);
            ui->log->setText("close log");
        }
        else if("close log" == ui->log->text()){
            ui->Tab->setTabVisible(Tabs_.at("log"),false);
            ui->log->setText("log");
        }
        bool is_vis = false;
        for(auto &tab_t:Tabs_){
            is_vis = is_vis||ui->Tab->isTabVisible(tab_t.second);
        }
        if(true == is_vis)ui->Tab->show();
        else ui->Tab->hide();
    });

    //leadTree
    QObject::connect(ui->leadtree,&QAction::triggered,[this](){
        if(ui->LeadTreeStack->isHidden())ui->LeadTreeStack->show();
        else ui->LeadTreeStack->hide();
    });
}

//load plugins
//default plugins dir : ./plugins
//return the num of Plugins avaliable
int MainWindow::LoadPlugins(){
    QString plugin_dir = "./plugins/carmera_calibration/";
    for(auto plugin_name:QDir(plugin_dir).entryList(QDir::Files)){
        auto loader = new QPluginLoader(plugin_dir + plugin_name);
        std::cout<<(plugin_dir + plugin_name).toStdString()<<std::endl;
        if (QObject *obj = loader->instance()) {
            AbstractPlugin *plugin = qobject_cast<AbstractPlugin *>(obj);
            if (nullptr != plugin) {
                this->plugins_.emplace(plugin_name,std::pair<decltype(loader),decltype(plugin)>(loader,plugin));
            } else {
                delete loader;
            }
        }
        else{
            delete loader;
        }
    }

    //Bind all plugins
    for(auto &plugin:plugins_){
        auto interface = plugin.second.second;
        interface->Init(log_);
        for(auto &label:interface->GetManager()->state_idxs){
            if(nullptr != label.second)
            ui->statusbar->addWidget(label.second);
        }
        if(nullptr != interface->GetManager()->side_btn){
            ui->plugin_list->layout()->addWidget(interface->GetManager()->side_btn);
            if(nullptr != interface->GetManager()->leadtree){
                int idx = ui->LeadTreeStack->addWidget(interface->GetManager()->leadtree);
                QObject::connect(interface->GetManager()->side_btn,&QToolButton::clicked,[this,idx](){
                    ui->LeadTreeStack->setCurrentIndex(idx);
                });
            }
            if(nullptr != interface->GetManager()->user_window){
                int idx = ui->user_stacked->addWidget(interface->GetManager()->user_window);
                QObject::connect(interface->GetManager()->side_btn,&QToolButton::clicked,[this,idx](){
                    ui->user_stacked->setCurrentIndex(idx);
                });
            }

        }
    }
    return plugins_.size();
}

void MainWindow::SetupPluginUi(UiManager *ui_manager){

}




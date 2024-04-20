#include "carmeracalibration.h"
#include <iostream>

CarmeraCalibration::CarmeraCalibration(QObject *parent)
    : ui_manager_(new UiManager{nullptr,nullptr,nullptr}),load_images_thread_(new QThread(this)){
    //side_btn
    ui_manager_->side_btn = ToolFunc::CreatToolButton("CarmeraCalibration",":/imgs/setup.png");

    //user_window
    ui_manager_->user_window = new QWidget();
    user_ui_ = new Ui::CarmeraCalibrationUser();
    user_ui_->setupUi(ui_manager_->user_window);

    images_view_ = new ThumbnailImage();
    user_ui_->image->addWidget(images_view_);

    //leadtree
    ui_manager_->leadtree = new QWidget();
    leadtree_ui_ = new Ui::CarmeraCalibrationLeadTree();
    leadtree_ui_->setupUi(ui_manager_->leadtree);

    //state label
    ui_manager_->state_idxs = {{"Cam",new QLabel("Cam")},{"Cal",new QLabel("Cal")}};

    //load images
    QObject::connect(load_images_thread_, &QThread::started, [this](){images_view_->LoadImages("/home/photinia/Pictures",QSize(150,100),10);});
    load_images_thread_->start();
 }

void CarmeraCalibration::Init(QPlainTextEdit *log){
    log_ = log;
}

UiManager* CarmeraCalibration::GetManager(){
    ToolFunc::LogError(log_, "CarmeraCalibration");  //用来测试的，后期删除
    ToolFunc::LogInfo(log_, "CarmeraCalibration");
    ToolFunc::LogWarn(log_, "CarmeraCalibration");
    ToolFunc::LogOk(log_, "CarmeraCalibration");
    ToolFunc::Log(log_, "CarmeraCalibration", "blue");
    ToolFunc::Log(log_, "CarmeraCalibration");

    return this->ui_manager_;
}

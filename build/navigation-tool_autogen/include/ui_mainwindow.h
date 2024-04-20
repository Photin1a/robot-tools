/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_terminal;
    QAction *log;
    QAction *leadtree;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *HSpliiter;
    QStackedWidget *LeadTreeStack;
    QWidget *lead_default;
    QSplitter *VSpliiter;
    QStackedWidget *user_stacked;
    QWidget *user_default;
    QTabWidget *Tab;
    QWidget *SideBar;
    QVBoxLayout *toolbar_layout;
    QWidget *plugin_list;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QToolButton *user;
    QToolButton *setup;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTerminal;
    QMenu *menuHelp;
    QMenu *menuplugins;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1100, 901);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #1e1e1e;"));
        new_terminal = new QAction(MainWindow);
        new_terminal->setObjectName(QString::fromUtf8("new_terminal"));
        log = new QAction(MainWindow);
        log->setObjectName(QString::fromUtf8("log"));
        leadtree = new QAction(MainWindow);
        leadtree->setObjectName(QString::fromUtf8("leadtree"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        HSpliiter = new QSplitter(centralwidget);
        HSpliiter->setObjectName(QString::fromUtf8("HSpliiter"));
        HSpliiter->setStyleSheet(QString::fromUtf8("QSplitter::handle {\n"
"    /*background-color: #808080;  \350\256\276\347\275\256\345\210\206\351\232\224\347\272\277\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #4671f1; /* \350\256\276\347\275\256\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
""));
        HSpliiter->setOrientation(Qt::Horizontal);
        HSpliiter->setHandleWidth(1);
        LeadTreeStack = new QStackedWidget(HSpliiter);
        LeadTreeStack->setObjectName(QString::fromUtf8("LeadTreeStack"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LeadTreeStack->sizePolicy().hasHeightForWidth());
        LeadTreeStack->setSizePolicy(sizePolicy);
        LeadTreeStack->setStyleSheet(QString::fromUtf8("background-color: #252526;"));
        lead_default = new QWidget();
        lead_default->setObjectName(QString::fromUtf8("lead_default"));
        LeadTreeStack->addWidget(lead_default);
        HSpliiter->addWidget(LeadTreeStack);
        VSpliiter = new QSplitter(HSpliiter);
        VSpliiter->setObjectName(QString::fromUtf8("VSpliiter"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(VSpliiter->sizePolicy().hasHeightForWidth());
        VSpliiter->setSizePolicy(sizePolicy1);
        VSpliiter->setStyleSheet(QString::fromUtf8("QSplitter::handle {\n"
"    background-color: #393939; /* \350\256\276\347\275\256\345\210\206\351\232\224\347\272\277\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"QSplitter::handle:hover {\n"
"    background-color: #4671f1; /* \350\256\276\347\275\256\351\274\240\346\240\207\346\202\254\345\201\234\346\227\266\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
""));
        VSpliiter->setOrientation(Qt::Vertical);
        VSpliiter->setOpaqueResize(false);
        VSpliiter->setHandleWidth(1);
        user_stacked = new QStackedWidget(VSpliiter);
        user_stacked->setObjectName(QString::fromUtf8("user_stacked"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(user_stacked->sizePolicy().hasHeightForWidth());
        user_stacked->setSizePolicy(sizePolicy2);
        user_stacked->setMinimumSize(QSize(300, 0));
        user_stacked->setMaximumSize(QSize(16777215, 16777215));
        user_stacked->setStyleSheet(QString::fromUtf8("background-color: #1e1e1e;"));
        user_default = new QWidget();
        user_default->setObjectName(QString::fromUtf8("user_default"));
        user_stacked->addWidget(user_default);
        VSpliiter->addWidget(user_stacked);
        Tab = new QTabWidget(VSpliiter);
        Tab->setObjectName(QString::fromUtf8("Tab"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Tab->sizePolicy().hasHeightForWidth());
        Tab->setSizePolicy(sizePolicy3);
        Tab->setStyleSheet(QString::fromUtf8("QTabWidget {\n"
"    border: none; /* \345\216\273\351\231\244QTabWidget\347\232\204\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: none; /* \345\216\273\351\231\244QTabWidget\347\232\204\345\206\205\345\256\271\345\214\272\345\237\237\350\276\271\346\241\206 */\n"
"}\n"
"\n"
"\n"
"QTabBar::tab {\n"
"    min-width: 35px; /* \350\256\276\347\275\256\346\240\207\347\255\276\345\256\275\345\272\246 */\n"
"	background-color: #1e1e1e;\n"
"}\n"
"\n"
"QTabBar::tab-bar {\n"
"    min-width: 35px; /* \350\256\276\347\275\256\346\240\207\347\255\276\345\256\275\345\272\246 */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"	color: #808080;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"	color: #ffffff;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"	color: #ffffff;\n"
"}\n"
"\n"
"\n"
""));
        Tab->setTabShape(QTabWidget::Rounded);
        Tab->setIconSize(QSize(16, 16));
        Tab->setElideMode(Qt::ElideNone);
        Tab->setMovable(true);
        VSpliiter->addWidget(Tab);
        HSpliiter->addWidget(VSpliiter);

        gridLayout->addWidget(HSpliiter, 0, 1, 1, 1);

        SideBar = new QWidget(centralwidget);
        SideBar->setObjectName(QString::fromUtf8("SideBar"));
        sizePolicy.setHeightForWidth(SideBar->sizePolicy().hasHeightForWidth());
        SideBar->setSizePolicy(sizePolicy);
        SideBar->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);"));
        toolbar_layout = new QVBoxLayout(SideBar);
        toolbar_layout->setSpacing(0);
        toolbar_layout->setObjectName(QString::fromUtf8("toolbar_layout"));
        toolbar_layout->setContentsMargins(0, 0, 0, 0);
        plugin_list = new QWidget(SideBar);
        plugin_list->setObjectName(QString::fromUtf8("plugin_list"));
        sizePolicy3.setHeightForWidth(plugin_list->sizePolicy().hasHeightForWidth());
        plugin_list->setSizePolicy(sizePolicy3);
        verticalLayout = new QVBoxLayout(plugin_list);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        toolbar_layout->addWidget(plugin_list);

        verticalSpacer = new QSpacerItem(20, 999999999, QSizePolicy::Minimum, QSizePolicy::Expanding);

        toolbar_layout->addItem(verticalSpacer);

        user = new QToolButton(SideBar);
        user->setObjectName(QString::fromUtf8("user"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(user->sizePolicy().hasHeightForWidth());
        user->setSizePolicy(sizePolicy4);
        user->setMinimumSize(QSize(48, 48));
        user->setStyleSheet(QString::fromUtf8("/* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2460\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"QToolButton{   \n"
"	border: 0px outset transparent;       \n"
"	background-color: #333333;	\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: #151515;	\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260 */\n"
"	background-color:#151515;	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        user->setIcon(icon);
        user->setIconSize(QSize(30, 30));

        toolbar_layout->addWidget(user);

        setup = new QToolButton(SideBar);
        setup->setObjectName(QString::fromUtf8("setup"));
        sizePolicy4.setHeightForWidth(setup->sizePolicy().hasHeightForWidth());
        setup->setSizePolicy(sizePolicy4);
        setup->setMinimumSize(QSize(48, 48));
        setup->setStyleSheet(QString::fromUtf8("/* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2460\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
"QToolButton{   \n"
"	border: 0px outset transparent;       \n"
"	background-color: #333333;	\n"
"}\n"
"\n"
"/* \351\274\240\346\240\207\346\202\254\345\201\234 */\n"
"QToolButton:hover{\n"
"	background-color: #151515;	\n"
"}\n"
"\n"
"/* \347\202\271\345\207\273\345\222\214\346\214\211\344\270\213 */\n"
"QToolButton:pressed,QToolButton:checked{\n"
"	border-left: 3px outset rgb(93, 95, 97);  /* \345\267\246\350\276\271\346\241\206\345\256\275\345\272\2463\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\346\267\261\347\201\260 */\n"
"	background-color:#151515;	\n"
"}\n"
"\n"
"QPushButton:default {\n"
"    border-color: navy; /* make the default button prominent */\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/setup.png"), QSize(), QIcon::Normal, QIcon::Off);
        setup->setIcon(icon1);
        setup->setIconSize(QSize(38, 38));

        toolbar_layout->addWidget(setup);


        gridLayout->addWidget(SideBar, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1100, 28));
        menubar->setStyleSheet(QString::fromUtf8("        QMenuBar {\n"
"background-color: rgb(62, 61, 57);\n"
"color: rgb(204, 204, 204);\n"
"        }\n"
"        QMenuBar::item {\n"
"background-color: rgb(62, 61, 57);\n"
"color: rgb(204, 204, 204);\n"
"        }\n"
"\n"
"        QMenu::item {\n"
"background-color: rgb(62, 61, 57);\n"
"color: rgb(204, 204, 204);\n"
"        }\n"
"        QMenu::item:selected {\n"
"            background-color: #555;\n"
"        }\n"
""));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setStyleSheet(QString::fromUtf8(""));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTerminal = new QMenu(menubar);
        menuTerminal->setObjectName(QString::fromUtf8("menuTerminal"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuplugins = new QMenu(menubar);
        menuplugins->setObjectName(QString::fromUtf8("menuplugins"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTerminal->menuAction());
        menubar->addAction(menuplugins->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuTerminal->addAction(new_terminal);
        menuTerminal->addAction(log);
        menuTerminal->addAction(leadtree);

        retranslateUi(MainWindow);

        Tab->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        new_terminal->setText(QCoreApplication::translate("MainWindow", "terminal", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        leadtree->setText(QCoreApplication::translate("MainWindow", "leadtree", nullptr));
        user->setText(QString());
        setup->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTerminal->setTitle(QCoreApplication::translate("MainWindow", "view", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuplugins->setTitle(QCoreApplication::translate("MainWindow", "plugins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

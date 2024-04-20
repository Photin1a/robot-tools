#ifndef ABSTRACTPLUGIN_H
#define ABSTRACTPLUGIN_H
#include <QWidget>
#include <QPlainTextEdit>
#include <QToolButton>
#include <QLabel>
#include <map>

#define PLUGIN_IID "com.ui.AbstractPlugin"

struct UiManager{
    QToolButton *side_btn = nullptr;
    QWidget *leadtree = nullptr;
    QWidget *user_window = nullptr;
    std::map<QString,QLabel*> state_idxs;
};

class AbstractPlugin{
public:
    virtual ~AbstractPlugin() {}
    virtual void Init(QPlainTextEdit* log = nullptr)=0;
    virtual UiManager* GetManager()=0;
};
Q_DECLARE_INTERFACE(AbstractPlugin, PLUGIN_IID)


class ToolFunc{
public:
 //note : auto icon = QString(":/imgs/tool_btn.png")
static QToolButton* CreatToolButton(const QString &name = "",const  QString &icon_path = "", int icon_width = 30, int icon_height = 30){
        auto tool_btn = new QToolButton();
        tool_btn->setObjectName(name);
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tool_btn->sizePolicy().hasHeightForWidth());
        tool_btn->setSizePolicy(sizePolicy4);
        tool_btn->setMinimumSize(QSize(48, 48));
        tool_btn->setStyleSheet(QString::fromUtf8("/* \344\270\212\350\276\271\346\241\206\345\256\275\345\272\2460\345\203\217\347\264\240\343\200\201\347\252\201\345\207\272\346\230\276\347\244\272\343\200\201\351\242\234\350\211\262\344\270\272\351\200\217\346\230\216 */\n"
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
    icon.addFile(icon_path, QSize(), QIcon::Normal, QIcon::Off);
    tool_btn->setIcon(icon);
    tool_btn->setIconSize(QSize(icon_width, icon_height));
    return tool_btn;
}

static void LogInfo(QPlainTextEdit *log, const QString &msg){
    if(nullptr == log)return;
    QTextCharFormat format;
    format.setForeground(QBrush(QColor("white")));
    log->setCurrentCharFormat(format);
    log->appendPlainText(msg);
    format.setForeground(QBrush(QColor("white"))); //恢复默认颜色
    log->setCurrentCharFormat(format);
}
static void LogOk(QPlainTextEdit *log, const QString &msg){
    if(nullptr == log)return;
    QTextCharFormat format;
    format.setForeground(QBrush(QColor("green")));
    log->setCurrentCharFormat(format);
    log->appendPlainText(msg);
    format.setForeground(QBrush(QColor("white"))); //恢复默认颜色
    log->setCurrentCharFormat(format);
}
static void LogWarn(QPlainTextEdit *log, const QString &msg){
    if(nullptr == log)return;
    QTextCharFormat format;
    format.setForeground(QBrush(QColor("yellow")));
    log->setCurrentCharFormat(format);
    log->appendPlainText(msg);
    format.setForeground(QBrush(QColor("white"))); //恢复默认颜色
    log->setCurrentCharFormat(format);
}
static void LogError(QPlainTextEdit *log, const QString &msg){
    if(nullptr == log)return;
    QTextCharFormat format;
    format.setForeground(QBrush(QColor("red")));
    log->setCurrentCharFormat(format);
    log->appendPlainText(msg);
    format.setForeground(QBrush(QColor("white"))); //恢复默认颜色
    log->setCurrentCharFormat(format);
}

static void Log(QPlainTextEdit *log, const QString &msg, const QString &color = "white"){
    if(nullptr == log)return;
    QTextCharFormat format;
    format.setForeground(QBrush(QColor(color)));
    log->setCurrentCharFormat(format);
    log->appendPlainText(msg);
    format.setForeground(QBrush(QColor("white"))); //恢复默认颜色
    log->setCurrentCharFormat(format);
}
};

#endif // ABSTRACTPLUGIN_H

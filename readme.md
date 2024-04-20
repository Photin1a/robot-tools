# Navigation tool Frame


## How to use it!

## untils
### side button
```cpp
#include <abstractplugin.h>

static QToolButton* CreatToolButton(const QString &name = "",const  QString &icon_path = "", int icon_width = 30, int icon_height = 30);
//auto btn = ToolFunc::CreatToolButton("CarmeraCalibration",":/imgs/setup.png",30 ,30);
```
### log
```cpp
#include <abstractplugin.h>

static void Log(QPlainTextEdit *log, const QString &msg, const QString &color = "white");
static void LogInfo(QPlainTextEdit *log, const QString &msg);
static void LogOk(QPlainTextEdit *log, const QString &msg);
static void LogWarn(QPlainTextEdit *log, const QString &msg);
static void LogError(QPlainTextEdit *log, const QString &msg);
// ToolFunc::LogError(log_, "CarmeraCalibration");  //用来测试的，后期删除
// ToolFunc::LogInfo(log_, "CarmeraCalibration");
// ToolFunc::LogWarn(log_, "CarmeraCalibration");
// ToolFunc::LogOk(log_, "CarmeraCalibration");
// ToolFunc::Log(log_, "CarmeraCalibration", "blue");
// ToolFunc::Log(log_, "CarmeraCalibration");
```


QMenu::item{
background-color: rgb(62, 61, 57);
color: rgb(204, 204, 204);
}
QMenu{
background-color: rgb(62, 61, 57);
color: rgb(204, 204, 204);
}
QMenu::selected{
background:rgba(82,130,164,1);border:1px solid rgba(82,130,164,1);
}
QMenu::item:selected{
background:rgba(82,130,164,1);border:1px solid rgba(82,130,164,1);
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPlainTextEdit>
#include <abstractplugin.h>
#include <QMainWindow>
#include <QPluginLoader>
#include <map>
#include <queue>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void SetDefaultSize();
    void InitUi();
    int LoadPlugins();
    void SetupPluginUi(UiManager *ui_manager);

private:
    Ui::MainWindow *ui;
    QPlainTextEdit *log_ = nullptr;
    QWidget *terminal_; //TODO
    std::map<QString,int> Tabs_;

    std::map<QString,std::pair<QPluginLoader*,AbstractPlugin*>> plugins_;


};
#endif // MAINWINDOW_H

#ifndef CARMERACALIBRATION_H
#define CARMERACALIBRATION_H

#include <QObject>
#include "abstractplugin.h"
#include <QtPlugin>
#include "ui_carmeracalibrationuser.h"
#include "ui_carmeracalibrationleadtree.h"
#include <vector>
#include <QListWidget>
#include <utils.hpp>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {
class CarmeraCalibrationUser;
class CarmeraCalibrationLeadTree;
}
QT_END_NAMESPACE

class CarmeraCalibration : public QObject, public AbstractPlugin{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID PLUGIN_IID)
    Q_INTERFACES(AbstractPlugin)
public:
    explicit CarmeraCalibration(QObject *parent = nullptr);
    void Init(QPlainTextEdit *log)override;
    UiManager* GetManager()override;

private:
    Ui::CarmeraCalibrationUser *user_ui_;
    Ui::CarmeraCalibrationLeadTree *leadtree_ui_;
    UiManager *ui_manager_;
    QPlainTextEdit *log_;
    ThumbnailImage *images_view_;
    QThread *load_images_thread_;
signals:
};

#endif // CARMERACALIBRATION_H

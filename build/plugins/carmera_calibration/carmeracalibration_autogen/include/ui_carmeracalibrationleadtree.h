/********************************************************************************
** Form generated from reading UI file 'carmeracalibrationleadtree.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARMERACALIBRATIONLEADTREE_H
#define UI_CARMERACALIBRATIONLEADTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarmeraCalibrationLeadTree
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *CarmeraCalibrationLeadTree)
    {
        if (CarmeraCalibrationLeadTree->objectName().isEmpty())
            CarmeraCalibrationLeadTree->setObjectName(QString::fromUtf8("CarmeraCalibrationLeadTree"));
        CarmeraCalibrationLeadTree->resize(400, 300);
        gridLayout = new QGridLayout(CarmeraCalibrationLeadTree);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CarmeraCalibrationLeadTree);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(CarmeraCalibrationLeadTree);

        QMetaObject::connectSlotsByName(CarmeraCalibrationLeadTree);
    } // setupUi

    void retranslateUi(QWidget *CarmeraCalibrationLeadTree)
    {
        CarmeraCalibrationLeadTree->setWindowTitle(QCoreApplication::translate("CarmeraCalibrationLeadTree", "Form", nullptr));
        label->setText(QCoreApplication::translate("CarmeraCalibrationLeadTree", "LeadTree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarmeraCalibrationLeadTree: public Ui_CarmeraCalibrationLeadTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARMERACALIBRATIONLEADTREE_H

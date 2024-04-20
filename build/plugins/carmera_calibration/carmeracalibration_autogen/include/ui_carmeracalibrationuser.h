/********************************************************************************
** Form generated from reading UI file 'carmeracalibrationuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARMERACALIBRATIONUSER_H
#define UI_CARMERACALIBRATIONUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarmeraCalibrationUser
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *image_name_label;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *image;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *delete_btn;

    void setupUi(QWidget *CarmeraCalibrationUser)
    {
        if (CarmeraCalibrationUser->objectName().isEmpty())
            CarmeraCalibrationUser->setObjectName(QString::fromUtf8("CarmeraCalibrationUser"));
        CarmeraCalibrationUser->resize(515, 558);
        verticalLayout = new QVBoxLayout(CarmeraCalibrationUser);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        image_name_label = new QLabel(CarmeraCalibrationUser);
        image_name_label->setObjectName(QString::fromUtf8("image_name_label"));

        horizontalLayout_2->addWidget(image_name_label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        image = new QStackedWidget(CarmeraCalibrationUser);
        image->setObjectName(QString::fromUtf8("image"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(image);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        delete_btn = new QPushButton(CarmeraCalibrationUser);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));

        horizontalLayout->addWidget(delete_btn);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CarmeraCalibrationUser);

        QMetaObject::connectSlotsByName(CarmeraCalibrationUser);
    } // setupUi

    void retranslateUi(QWidget *CarmeraCalibrationUser)
    {
        CarmeraCalibrationUser->setWindowTitle(QCoreApplication::translate("CarmeraCalibrationUser", "Form", nullptr));
        image_name_label->setText(QString());
        delete_btn->setText(QCoreApplication::translate("CarmeraCalibrationUser", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarmeraCalibrationUser: public Ui_CarmeraCalibrationUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARMERACALIBRATIONUSER_H

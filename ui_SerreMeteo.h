/********************************************************************************
** Form generated from reading UI file 'SerreMeteo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERREMETEO_H
#define UI_SERREMETEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerreMeteo
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *layoutSerre;

    void setupUi(QDialog *SerreMeteo)
    {
        if (SerreMeteo->objectName().isEmpty())
            SerreMeteo->setObjectName(QStringLiteral("SerreMeteo"));
        SerreMeteo->resize(1920, 1080);
        SerreMeteo->setMinimumSize(QSize(1920, 1080));
        gridLayoutWidget = new QWidget(SerreMeteo);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-10, 0, 1931, 1081));
        layoutSerre = new QGridLayout(gridLayoutWidget);
        layoutSerre->setObjectName(QStringLiteral("layoutSerre"));
        layoutSerre->setHorizontalSpacing(4);
        layoutSerre->setVerticalSpacing(2);
        layoutSerre->setContentsMargins(0, 0, 0, 0);

        retranslateUi(SerreMeteo);

        QMetaObject::connectSlotsByName(SerreMeteo);
    } // setupUi

    void retranslateUi(QDialog *SerreMeteo)
    {
        SerreMeteo->setWindowTitle(QApplication::translate("SerreMeteo", "SerreMeteo", 0));
    } // retranslateUi

};

namespace Ui {
    class SerreMeteo: public Ui_SerreMeteo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERREMETEO_H

/********************************************************************************
** Form generated from reading UI file 'alertos.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTOS_H
#define UI_ALERTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alertos
{
public:
    QWidget *widget;
    QPushButton *confirmation;
    QLabel *fondRouge;
    QLabel *label;

    void setupUi(QDialog *alertos)
    {
        if (alertos->objectName().isEmpty())
            alertos->setObjectName(QStringLiteral("alertos"));
        alertos->setWindowModality(Qt::ApplicationModal);
        alertos->resize(780, 160);
        alertos->setMinimumSize(QSize(780, 160));
        alertos->setMaximumSize(QSize(780, 160));
        widget = new QWidget(alertos);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        widget->setGeometry(QRect(0, 0, 780, 160));
        widget->setMinimumSize(QSize(780, 160));
        widget->setMaximumSize(QSize(780, 160));
        widget->setAutoFillBackground(true);
        confirmation = new QPushButton(widget);
        confirmation->setObjectName(QStringLiteral("confirmation"));
        confirmation->setGeometry(QRect(280, 120, 221, 22));
        fondRouge = new QLabel(widget);
        fondRouge->setObjectName(QStringLiteral("fondRouge"));
        fondRouge->setGeometry(QRect(0, 0, 780, 160));
        fondRouge->setMinimumSize(QSize(780, 160));
        fondRouge->setMaximumSize(QSize(780, 160));
        fondRouge->setPixmap(QPixmap(QString::fromUtf8("../../Documents/ihm serre/rouge.png")));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 731, 91));
        QFont font;
        font.setPointSize(72);
        label->setFont(font);
        fondRouge->raise();
        confirmation->raise();
        label->raise();

        retranslateUi(alertos);

        QMetaObject::connectSlotsByName(alertos);
    } // setupUi

    void retranslateUi(QDialog *alertos)
    {
        alertos->setWindowTitle(QApplication::translate("alertos", "Alarme vent", 0));
        confirmation->setText(QApplication::translate("alertos", "J'ai pris conscience de l'alerte", 0));
        fondRouge->setText(QString());
        label->setText(QApplication::translate("alertos", "ALERTE VENT !", 0));
    } // retranslateUi

};

namespace Ui {
    class alertos: public Ui_alertos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTOS_H

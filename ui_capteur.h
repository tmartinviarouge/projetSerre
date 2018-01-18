/********************************************************************************
** Form generated from reading UI file 'capteur.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTEUR_H
#define UI_CAPTEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_capteur
{
public:
    QWidget *widget;
    QTextEdit *ValHum;
    QTextEdit *ValLum;
    QTextEdit *ValTemp;
    QLabel *tempePic;
    QLabel *Lum;
    QLabel *Hum;
    QLabel *Temp;
    QLabel *goutePic;
    QLabel *soleilPic;
    QLabel *Titre;

    void setupUi(QDialog *capteur)
    {
        if (capteur->objectName().isEmpty())
            capteur->setObjectName(QStringLiteral("capteur"));
        capteur->setEnabled(true);
        capteur->resize(960, 540);
        capteur->setMinimumSize(QSize(960, 540));
        capteur->setMaximumSize(QSize(960, 540));
        widget = new QWidget(capteur);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 90, 861, 421));
        ValHum = new QTextEdit(widget);
        ValHum->setObjectName(QStringLiteral("ValHum"));
        ValHum->setGeometry(QRect(400, 230, 171, 31));
        ValHum->setReadOnly(true);
        ValLum = new QTextEdit(widget);
        ValLum->setObjectName(QStringLiteral("ValLum"));
        ValLum->setGeometry(QRect(400, 330, 169, 31));
        ValLum->setReadOnly(true);
        ValLum->setAcceptRichText(false);
        ValTemp = new QTextEdit(widget);
        ValTemp->setObjectName(QStringLiteral("ValTemp"));
        ValTemp->setGeometry(QRect(400, 130, 169, 31));
        ValTemp->setReadOnly(true);
        tempePic = new QLabel(widget);
        tempePic->setObjectName(QStringLiteral("tempePic"));
        tempePic->setGeometry(QRect(590, 110, 51, 51));
        tempePic->setPixmap(QPixmap(QString::fromUtf8("tempe.png")));
        Lum = new QLabel(widget);
        Lum->setObjectName(QStringLiteral("Lum"));
        Lum->setGeometry(QRect(140, 210, 211, 73));
        Lum->setStyleSheet(QLatin1String("\n"
"font: 20pt \"Sans Serif\";"));
        Hum = new QLabel(widget);
        Hum->setObjectName(QStringLiteral("Hum"));
        Hum->setGeometry(QRect(140, 290, 211, 111));
        Hum->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        Temp = new QLabel(widget);
        Temp->setObjectName(QStringLiteral("Temp"));
        Temp->setGeometry(QRect(140, 80, 231, 121));
        Temp->setStyleSheet(QStringLiteral("font: 20pt \"Sans Serif\";"));
        goutePic = new QLabel(widget);
        goutePic->setObjectName(QStringLiteral("goutePic"));
        goutePic->setGeometry(QRect(590, 200, 81, 71));
        goutePic->setPixmap(QPixmap(QString::fromUtf8("goute.png")));
        soleilPic = new QLabel(widget);
        soleilPic->setObjectName(QStringLiteral("soleilPic"));
        soleilPic->setGeometry(QRect(590, 310, 81, 71));
        soleilPic->setPixmap(QPixmap(QString::fromUtf8("soleil.png")));
        Titre = new QLabel(widget);
        Titre->setObjectName(QStringLiteral("Titre"));
        Titre->setGeometry(QRect(20, 0, 221, 71));
        Titre->setStyleSheet(QStringLiteral("font: 26pt \"Sans Serif\";"));

        retranslateUi(capteur);

        QMetaObject::connectSlotsByName(capteur);
    } // setupUi

    void retranslateUi(QDialog *capteur)
    {
        capteur->setWindowTitle(QApplication::translate("capteur", "capteur", 0));
        tempePic->setText(QString());
        Lum->setText(QApplication::translate("capteur", "Humidit\303\251", 0));
        Hum->setText(QApplication::translate("capteur", "Luminosit\303\251", 0));
        Temp->setText(QApplication::translate("capteur", "Temp\303\251rature", 0));
        goutePic->setText(QString());
        soleilPic->setText(QString());
        Titre->setText(QApplication::translate("capteur", "SERRE", 0));
    } // retranslateUi

};

namespace Ui {
    class capteur: public Ui_capteur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTEUR_H

/********************************************************************************
** Form generated from reading UI file 'fenetre.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_H
#define UI_FENETRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre
{
public:
    QWidget *widget;
    QLabel *Titre;
    QLabel *TitreTemp;
    QLabel *TiteVit;
    QLabel *TitreDir;
    QLabel *degres;
    QLabel *vit;
    QLabel *dir;
    QLabel *terter;
    QLabel *manman;
    QLabel *fondStation;
    QLabel *temp;

    void setupUi(QDialog *fenetre)
    {
        if (fenetre->objectName().isEmpty())
            fenetre->setObjectName(QStringLiteral("fenetre"));
        fenetre->resize(960, 540);
        fenetre->setMinimumSize(QSize(960, 540));
        fenetre->setMaximumSize(QSize(960, 540));
        widget = new QWidget(fenetre);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 960, 540));
        widget->setMinimumSize(QSize(960, 540));
        widget->setMaximumSize(QSize(961, 541));
        Titre = new QLabel(widget);
        Titre->setObjectName(QStringLiteral("Titre"));
        Titre->setGeometry(QRect(20, 10, 401, 61));
        QFont font;
        font.setPointSize(40);
        Titre->setFont(font);
        TitreTemp = new QLabel(widget);
        TitreTemp->setObjectName(QStringLiteral("TitreTemp"));
        TitreTemp->setGeometry(QRect(100, 100, 281, 51));
        QFont font1;
        font1.setPointSize(30);
        TitreTemp->setFont(font1);
        TiteVit = new QLabel(widget);
        TiteVit->setObjectName(QStringLiteral("TiteVit"));
        TiteVit->setGeometry(QRect(100, 160, 331, 51));
        TiteVit->setFont(font1);
        TitreDir = new QLabel(widget);
        TitreDir->setObjectName(QStringLiteral("TitreDir"));
        TitreDir->setGeometry(QRect(100, 220, 361, 51));
        TitreDir->setFont(font1);
        degres = new QLabel(widget);
        degres->setObjectName(QStringLiteral("degres"));
        degres->setGeometry(QRect(820, 110, 61, 51));
        degres->setFont(font1);
        vit = new QLabel(widget);
        vit->setObjectName(QStringLiteral("vit"));
        vit->setGeometry(QRect(750, 160, 131, 51));
        vit->setFont(font1);
        dir = new QLabel(widget);
        dir->setObjectName(QStringLiteral("dir"));
        dir->setGeometry(QRect(750, 210, 211, 51));
        dir->setFont(font1);
        terter = new QLabel(widget);
        terter->setObjectName(QStringLiteral("terter"));
        terter->setGeometry(QRect(890, 110, 41, 41));
        terter->setPixmap(QPixmap(QString::fromUtf8("../../Documents/ihm serre/terter.png")));
        manman = new QLabel(widget);
        manman->setObjectName(QStringLiteral("manman"));
        manman->setGeometry(QRect(890, 160, 41, 41));
        manman->setPixmap(QPixmap(QString::fromUtf8("../../Documents/ihm serre/manman.png")));
        fondStation = new QLabel(widget);
        fondStation->setObjectName(QStringLiteral("fondStation"));
        fondStation->setGeometry(QRect(0, 0, 960, 540));
        fondStation->setMinimumSize(QSize(960, 540));
        fondStation->setMaximumSize(QSize(960, 540));
        fondStation->setPixmap(QPixmap(QString::fromUtf8("../../Documents/ihm serre/fond.png")));
        temp = new QLabel(widget);
        temp->setObjectName(QStringLiteral("temp"));
        temp->setGeometry(QRect(750, 110, 61, 51));
        temp->setFont(font1);
        fondStation->raise();
        Titre->raise();
        TitreTemp->raise();
        TiteVit->raise();
        TitreDir->raise();
        degres->raise();
        vit->raise();
        dir->raise();
        terter->raise();
        manman->raise();
        temp->raise();

        retranslateUi(fenetre);

        QMetaObject::connectSlotsByName(fenetre);
    } // setupUi

    void retranslateUi(QDialog *fenetre)
    {
        fenetre->setWindowTitle(QApplication::translate("fenetre", "Station m\303\251t\303\251o", 0));
        Titre->setText(QApplication::translate("fenetre", "Station m\303\251t\303\251o", 0));
        TitreTemp->setText(QApplication::translate("fenetre", "Temp\303\251rature", 0));
        TiteVit->setText(QApplication::translate("fenetre", "Vitesse du vent", 0));
        TitreDir->setText(QApplication::translate("fenetre", "Direction du vent", 0));
        degres->setText(QApplication::translate("fenetre", "\302\260C", 0));
        vit->setText(QApplication::translate("fenetre", "9km/h", 0));
        dir->setText(QApplication::translate("fenetre", "Sud", 0));
        terter->setText(QString());
        manman->setText(QString());
        fondStation->setText(QString());
        temp->setText(QApplication::translate("fenetre", "-", 0));
    } // retranslateUi

};

namespace Ui {
    class fenetre: public Ui_fenetre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_H

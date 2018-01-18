/********************************************************************************
** Form generated from reading UI file 'SerreGestion.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERREGESTION_H
#define UI_SERREGESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerreGestion
{
public:
    QWidget *widget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QTextEdit *textEditPulverisation;
    QCheckBox *checkBoxOuvrant;
    QCheckBox *checkBoxPulverisation;
    QLabel *label_6;
    QTextEdit *textEditOuvrant;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnOuvrir;
    QPushButton *btnFermer;

    void setupUi(QDialog *SerreGestion)
    {
        if (SerreGestion->objectName().isEmpty())
            SerreGestion->setObjectName(QStringLiteral("SerreGestion"));
        SerreGestion->resize(641, 347);
        widget = new QWidget(SerreGestion);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 10, 551, 321));
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 50, 461, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        textEditPulverisation = new QTextEdit(gridLayoutWidget);
        textEditPulverisation->setObjectName(QStringLiteral("textEditPulverisation"));
        textEditPulverisation->setMinimumSize(QSize(0, 40));
        textEditPulverisation->setMaximumSize(QSize(80, 40));
        textEditPulverisation->setReadOnly(true);

        gridLayout->addWidget(textEditPulverisation, 1, 1, 1, 1);

        checkBoxOuvrant = new QCheckBox(gridLayoutWidget);
        checkBoxOuvrant->setObjectName(QStringLiteral("checkBoxOuvrant"));
        checkBoxOuvrant->setMinimumSize(QSize(0, 40));
        checkBoxOuvrant->setMaximumSize(QSize(16777215, 40));

        gridLayout->addWidget(checkBoxOuvrant, 3, 1, 1, 1, Qt::AlignHCenter);

        checkBoxPulverisation = new QCheckBox(gridLayoutWidget);
        checkBoxPulverisation->setObjectName(QStringLiteral("checkBoxPulverisation"));
        checkBoxPulverisation->setMinimumSize(QSize(0, 40));
        checkBoxPulverisation->setMaximumSize(QSize(16777215, 40));
        checkBoxPulverisation->setBaseSize(QSize(0, 40));

        gridLayout->addWidget(checkBoxPulverisation, 2, 1, 1, 1, Qt::AlignHCenter);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 3, 1, 1);

        textEditOuvrant = new QTextEdit(gridLayoutWidget);
        textEditOuvrant->setObjectName(QStringLiteral("textEditOuvrant"));
        textEditOuvrant->setEnabled(true);
        textEditOuvrant->setMinimumSize(QSize(0, 40));
        textEditOuvrant->setMaximumSize(QSize(80, 40));
        textEditOuvrant->setReadOnly(true);
        textEditOuvrant->setOverwriteMode(false);

        gridLayout->addWidget(textEditOuvrant, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnOuvrir = new QPushButton(gridLayoutWidget);
        btnOuvrir->setObjectName(QStringLiteral("btnOuvrir"));

        horizontalLayout_3->addWidget(btnOuvrir);

        btnFermer = new QPushButton(gridLayoutWidget);
        btnFermer->setObjectName(QStringLiteral("btnFermer"));
        btnFermer->setEnabled(true);

        horizontalLayout_3->addWidget(btnFermer);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(SerreGestion);

        QMetaObject::connectSlotsByName(SerreGestion);
    } // setupUi

    void retranslateUi(QDialog *SerreGestion)
    {
        SerreGestion->setWindowTitle(QApplication::translate("SerreGestion", "SerreGestion", 0));
        label_4->setText(QApplication::translate("SerreGestion", " Autorisation de la pulv\303\251risation automatique :", 0));
        label_3->setText(QApplication::translate("SerreGestion", " Etat de la pulv\303\251risation :", 0));
        label_2->setText(QApplication::translate("SerreGestion", " Position des ouvrants :", 0));
        label->setText(QApplication::translate("SerreGestion", " Forcer la commande des ouvrant :", 0));
        textEditPulverisation->setHtml(QApplication::translate("SerreGestion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        checkBoxOuvrant->setText(QString());
        checkBoxPulverisation->setText(QString());
        label_6->setText(QString());
        textEditOuvrant->setHtml(QApplication::translate("SerreGestion", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label_5->setText(QApplication::translate("SerreGestion", "%", 0));
        btnOuvrir->setText(QApplication::translate("SerreGestion", "Ouvrir", 0));
        btnFermer->setText(QApplication::translate("SerreGestion", "Fermer", 0));
    } // retranslateUi

};

namespace Ui {
    class SerreGestion: public Ui_SerreGestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERREGESTION_H

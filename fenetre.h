/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fenetre.h
 * Author: snir2g2
 *
 * Created on 21 novembre 2017, 14:54
 */

#ifndef _FENETRE_H
#define _FENETRE_H
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QString>
#include "ui_fenetre.h"

class fenetre : public QDialog {
    Q_OBJECT
public:
    fenetre();
    virtual ~fenetre();
    void setTextLabel();
private:
    Ui::fenetre widget;
    QLabel *temp;
    QPushButton *testas;
};

#endif /* _FENETRE_H */

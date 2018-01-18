/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SerreGestion.h
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 17:29
 */

#ifndef _SERREGESTION_H
#define _SERREGESTION_H

#include "ui_SerreGestion.h"
#include <QTimer>
#include <QString>
#include <QCheckBox>

class SerreGestion : public QDialog {
    Q_OBJECT
public:
    SerreGestion();
    virtual ~SerreGestion();
public slots:
    void SlotOuvrant();
    void SlotPulverisation();
    void SlotAutPulverisation();
    void SlotCmdOuvrant(); 
    void SlotOuvrir();
    void SlotFermer();
    
private:
    Ui::SerreGestion widget;
    QTimer *timer;
    
};

#endif /* _SERREGESTION_H */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   alertos.h
 * Author: snir2g2
 *
 * Created on 5 décembre 2017, 14:44
 */

#ifndef _ALERTOS_H
#define _ALERTOS_H

#include "ui_alertos.h"

class alertos : public QDialog {
    Q_OBJECT
public:
    alertos();
    virtual ~alertos();
private:
    Ui::alertos widget;
};

#endif /* _ALERTOS_H */

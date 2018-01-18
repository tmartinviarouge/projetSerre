/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SerreMeteo.h
 * Author: snir2g2
 *
 * Created on 11 janvier 2018, 15:46
 */

#ifndef _SERREMETEO_H
#define _SERREMETEO_H

#include "ui_SerreMeteo.h"
#include "SerreGestion.h"
#include "alertos.h"
#include "capteur.h"
#include "fenetre.h"

class SerreMeteo : public QDialog {
    Q_OBJECT
public:
    SerreMeteo();
    virtual ~SerreMeteo();
private:
    Ui::SerreMeteo widget;
    SerreGestion* gestionSerre1;
    SerreGestion* gestionSerre2;
    SerreGestion* gestionSerre3;
    capteur* capteurSerre1;
    capteur* capteurSerre2;
    capteur* capteurSerre3;
    
    
};

#endif /* _SERREMETEO_H */

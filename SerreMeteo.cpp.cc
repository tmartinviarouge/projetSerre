/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SerreMeteo.cpp
 * Author: snir2g2
 *
 * Created on 11 janvier 2018, 15:46
 */

#include "SerreMeteo.h"
#include <iostream>
#include <unistd.h>
#include <QString>
#include <QCheckBox>
#include <Qt>

SerreMeteo::SerreMeteo() {
    widget.setupUi(this);
    gestionSerre1 = new SerreGestion();
    widget.layoutSerre->addWidget(gestionSerre1, 2, 1);
    gestionSerre2 = new SerreGestion();
    widget.layoutSerre->addWidget(gestionSerre2, 2, 2);
    gestionSerre3 = new SerreGestion();
    widget.layoutSerre->addWidget(gestionSerre3, 4, 1);
    capteurSerre1 = new capteur();
    widget.layoutSerre->addWidget(capteurSerre1, 1, 1);
    capteurSerre2 = new capteur();
    widget.layoutSerre->addWidget(capteurSerre2, 1, 2);
    capteurSerre3 = new capteur();
    widget.layoutSerre->addWidget(capteurSerre3, 3, 1);
    
    
}

SerreMeteo::~SerreMeteo() {
}

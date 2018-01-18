/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   SerreGestion.cpp
 * Author: snir2g2
 *
 * Created on 30 novembre 2017, 17:29
 */

#include "SerreGestion.h"
#include <iostream>
#include <unistd.h>
#include <QString>
#include <QCheckBox>
#include <Qt>

using namespace std;

SerreGestion::SerreGestion() {
    
    timer = new QTimer;
    timer->start(3000);
    widget.setupUi(this);
    timer->connect(timer, SIGNAL(timeout()),this, SLOT(SlotOuvrant()));
    timer->connect(timer, SIGNAL(timeout()),this, SLOT(SlotPulverisation()));
    widget.btnFermer->setEnabled(false);
    widget.btnOuvrir->setEnabled(false);
    connect(widget.checkBoxPulverisation, SIGNAL(clicked()), this, SLOT(SlotAutPulverisation()));
    connect(widget.checkBoxOuvrant, SIGNAL(clicked()), this, SLOT(SlotCmdOuvrant()));
    connect(widget.btnFermer, SIGNAL(clicked()), this, SLOT(SlotFermer()));
    connect(widget.btnOuvrir, SIGNAL(clicked()), this, SLOT(SlotOuvrir()));
    
   
}

SerreGestion::~SerreGestion() {
}

void SerreGestion::SlotOuvrant() {
    int val = rand()% 100;
    widget.textEditOuvrant->setText(QString::number(val));
    
}

void SerreGestion::SlotPulverisation() {
    int val = rand()% 2;
    if (val == 1){
    widget.textEditPulverisation->setText("En cours");
    }
    else {
       widget.textEditPulverisation->setText("Arrêter"); 
    }
}

void SerreGestion::SlotAutPulverisation() {
    
                               
    
    if (widget.checkBoxPulverisation->isChecked()) {
        cout << " CbPulvérisation coché" << endl;
            
    }
    else {
        cout << "CbPulvérisation décoché" << endl;
    }
                  
}


void SerreGestion::SlotCmdOuvrant() {
    if (widget.checkBoxOuvrant->isChecked()) {
        cout << "CbOuvrant coché" << endl;
        widget.btnFermer->setEnabled(true);
        widget.btnOuvrir->setEnabled(true);
    }
    else {
        cout << "CbOuvrant décoché" << endl;
        widget.btnFermer->setEnabled(false);
        widget.btnOuvrir->setEnabled(false);
    }
    
           
    
}

void SerreGestion::SlotOuvrir() {
    cout << "Ouverture..." << endl;
}

void SerreGestion::SlotFermer() {
    cout << "Fermeture..." << endl;
}

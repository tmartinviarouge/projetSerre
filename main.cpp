/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g2
 *
 * Created on 21 décembre 2017, 16:35
 */

#include <QApplication>
#include "SerreGestion.h"
#include "capteur.h"
#include "SerreGestion.h"
#include "SerreMeteo.h"
#include "fenetre.h"
#include "alertos.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    //SerreGestion* serre = new SerreGestion;
    //serre->show();
    // create and show your widgets here
    
 //  fenetre* uneFenetre = new fenetre;
 //  uneFenetre->show();
   
  // capteur* unCapteur = new capteur;
  //unCapteur->show();
   
  // alertos* uneAlerte = new alertos;
  // uneAlerte->show();
    
      SerreMeteo* uneSerre = new SerreMeteo;
      uneSerre->show();
    
    return app.exec();
}

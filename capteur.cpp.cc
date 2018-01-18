
#include "capteur.h"

capteur::capteur() {
    widget.setupUi(this);
    unTimer = new QTimer();
    widget.setupUi(this);
    connect (unTimer,SIGNAL(timeout()),this,SLOT(unSlot()));
    unTimer->start(3000);
    widget.ValTemp->setText(" °C");
    widget.ValLum->setText("  W/m²");
    widget.ValHum->setText("  %");
};


capteur::~capteur() {
    
};


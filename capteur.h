
#ifndef _CAPTEUR_H
#define _CAPTEUR_H
#include <QTimer>
#include "ui_capteur.h"

class capteur : public QDialog {
    Q_OBJECT
public:
    capteur();
    virtual ~capteur();
    int temperature;
    int humidite;
    int luminosite;
    
private:
    Ui::capteur widget;
    QTimer *unTimer;
    
        
};

#endif 


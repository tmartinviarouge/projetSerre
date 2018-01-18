/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   fenetre.cpp
 * Author: snir2g2
 *
 * Created on 21 novembre 2017, 14:54
 */

#include "fenetre.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QString>

void fenetre::setTextLabel()
{
}

fenetre::fenetre() {
    widget.setupUi(this);
    temp = new QLabel;
}

fenetre::~fenetre() {
}

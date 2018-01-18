/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   alertos.cpp
 * Author: snir2g2
 *
 * Created on 5 décembre 2017, 14:44
 */

#include "alertos.h"

alertos::alertos() {
    widget.setupUi(this);
    connect(widget.confirmation, SIGNAL(clicked()),this,SLOT(close()));
}

alertos::~alertos() {
}

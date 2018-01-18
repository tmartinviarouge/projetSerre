# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = ihm3
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += SerreGestion.cpp.cc SerreMeteo.cpp.cc alertos.cpp.cc capteur.cpp.cc fenetre.cpp.cc main.cpp
HEADERS += SerreGestion.h SerreMeteo.h alertos.h capteur.h fenetre.h
FORMS += SerreGestion.ui SerreMeteo.ui alertos.ui capteur.ui fenetre.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 

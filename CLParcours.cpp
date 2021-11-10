//
// Created by Indiana Sofia on 09/11/2021.
//
#include "CLParcours.h"

double Resultat;


CLParcours::CLParcours(){};

double CLParcours::getResultat() {
    return ::Resultat;
}
void CLParcours::setResultat(double val) {
    Resultat = val;
}
CLParcours::CLParcours(int nbreDePointTotal){};

double CLParcours::calculDistance(){
};

void CLParcours::ajouterPoint(CLpoint *pLpoint) {
}

void CLParcours::message() {
    std::cout << "Distance total du parcours : " << Resultat << std::endl;
}
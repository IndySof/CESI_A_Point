//
// Created by Indiana Sofia on 09/11/2021.
//

#include <math.h>

#include "CLpoint3D.h"
#include "CLparcours3D.h"

#include <iostream>

CLparcours3D(int nbreDePointsTotal) {
    this -> nbreDePointsTotal = nbreDePointsTotal;
    this -> listeDePoints = new CLpoint3D[nbreDePointsTotal];
}

void ajouterPoint(CLpoint3D *p){
    this -> listeDePoints[nbreDePointsAjoute] = *p;
    this -> nbreDePointsAjoute++;
}
double calculerDistance(){
    double d1=0,d2=0;
    if (nbreDePointsAjoute < 2 || nbreDePointsAjoute > 3) {std::cerr << "2 points minimum / 3 points max" << std::endl; return 0;}

    if (nbreDePointsAjoute == 2){
        d1 = sqrt(pow(this -> listeDePoints[1].XX - this -> listeDePoints[0].XX ,2) +
                  pow(this -> listeDePoints[1].YY - this -> listeDePoints[0].YY ,2) +
                  pow(this -> listeDePoints[1].ZZ - this -> listeDePoints[0].ZZ ,2));
    }
    if (nbreDePointsAjoute == 3) {
        d2 = sqrt(pow(this->listeDePoints[2].XX - this->listeDePoints[1].XX, 2) +
                  pow(this->listeDePoints[2].YY - this->listeDePoints[1].YY, 2) +
                  pow(this->listeDePoints[2].ZZ - this->listeDePoints[1].ZZ, 2));
    }
    return d1+d2;

}
void message() {

    std::cout << "Coordonnée : " << std::endl;

}


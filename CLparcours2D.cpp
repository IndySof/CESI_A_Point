//
// Created by Indiana Sofia on 09/11/2021.
//
#include "CLparcours2D.h"
#include <iostream>

CLparcours2D::CLparcours2D(int nbreDePointsTotal) {
    this -> nbreDePointsTotal = nbreDePointsTotal;
    this -> listeDePoints = new CLpoint[nbreDePointsTotal];
}

void CLparcours2D::ajouterPoint(CLpoint *p){
    std::cout << "Point\n";

    //this -> listeDePoints[nbreDePointsAjoute] = new CLpoint();
    this -> listeDePoints[nbreDePointsAjoute].X = p-> X;
    this -> listeDePoints[nbreDePointsAjoute].Y = p-> Y;
    std::cout << "(" <<this -> listeDePoints[nbreDePointsAjoute].X << ";" <<  this -> listeDePoints[nbreDePointsAjoute].X << ")\n";
    this -> nbreDePointsAjoute++;
}
double CLparcours2D::calculDistance(){
    double d1=0,d2=0;
    //std::cout << "calculerDistance CLparcours2D \n";
     if (nbreDePointsAjoute < 2 || nbreDePointsAjoute > 3) {std::cerr << "2 points minimum / 3 points max" << std::endl; return 0;}

    if (nbreDePointsAjoute > 2){
        d1 = sqrt(pow(this -> listeDePoints[1].X - this -> listeDePoints[0].X ,2) + pow(this -> listeDePoints[1].Y - this -> listeDePoints[0].Y ,2) );
    }
    if (nbreDePointsAjoute == 3) {
        d2 = sqrt(pow(this->listeDePoints[2].X - this->listeDePoints[1].X, 2) +
                  pow(this->listeDePoints[2].Y - this->listeDePoints[1].Y, 2));
    }

    //std::cout << "CLparcours2D::calculDistance d1="  <<  d1   << " et d2=" << d2 << "\n";
    return d1+d2;

}
void CLparcours2D::message() {


}

//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURS2D_H
#define PROSIT_A_POINT__CLPARCOURS2D_H

#include <math.h>

#include "CLpoint.h"

class CLparcours2D:public CLParcours{

public:

    CLparcours2D(int nbreDePointsTotal) {
    this -> nbreDePointsTotal = nbreDePointsTotal;
    this -> listeDePoints = new CLpoint[nbreDePointsTotal];
    }

    void ajouterPoint(CLpoint *p){
        this -> listeDePoints[nbreDePointsAjoute] = *p;
        this -> nbreDePointsAjoute++;
    }
    double calculerDistance(){
        double d1=0,d2=0;
        if (nbreDePointsAjoute < 2 || nbreDePointsAjoute > 3) {std::cerr << "2 points minimum / 3 points max" << std::endl; return 0;}

        if (nbreDePointsAjoute == 2){
            d1 = sqrt(pow(this -> listeDePoints[1].X - this -> listeDePoints[0].X ,2) + pow(this -> listeDePoints[1].Y - this -> listeDePoints[0].Y ,2) );
        }
        if (nbreDePointsAjoute == 3) {
            d2 = sqrt(pow(this->listeDePoints[2].X - this->listeDePoints[1].X, 2) +
                      pow(this->listeDePoints[2].Y - this->listeDePoints[1].Y, 2));
        }
        return d1+d2;

    }
    void message() {

        std::cout << "Coordonnée : " << std::endl;

    }

};



#endif //PROSIT_A_POINT__CLPARCOURS2D_H

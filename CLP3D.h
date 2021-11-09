//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURSPOUR3D_H
#define PROSIT_A_POINT__CLPARCOURSPOUR3D_H

#include "CLpoint3D.h"


class CLP3D {

public :

    CLpoint3D* listeDePoints;

    int nbreDePointsTotal;
    int nbreDePointsAjoute = 0;

    CLP3D(){};
    CLP3D(int nbreDePointTotal){};



    double calculDistance(){};

    void ajouterPoint(CLpoint3D *pLpoint) {

    }

    void message() {

    }
};
#endif //PROSIT_A_POINT__CLPARCOURSPOUR3D_H

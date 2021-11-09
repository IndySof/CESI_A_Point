//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURS_H
#define PROSIT_A_POINT__CLPARCOURS_H

#include "CLpoint.h"


class CLParcours {

public :

    CLpoint* listeDePoints;

    int nbreDePointsTotal;
    int nbreDePointsAjoute = 0;

    CLParcours(){};
    CLParcours(int nbreDePointTotal){};



    double calculDistance(){};

    void ajouterPoint(CLpoint *pLpoint) {

    }

    void message() {

    }
};
#endif //PROSIT_A_POINT__CLPARCOURS_H

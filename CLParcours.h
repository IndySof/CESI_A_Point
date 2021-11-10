//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURS_H
#define PROSIT_A_POINT__CLPARCOURS_H

#include "CLpoint.h"
#include <iostream>


//extern double Resultat;

class CLParcours {
private:
    double Resultat;

public :
    CLpoint* listeDePoints;
    int nbreDePointsTotal;
    double getResultat();
    void setResultat(double);
    int nbreDePointsAjoute = 0;

    CLParcours();
    CLParcours(int nbreDePointTotal);

    virtual double calculDistance();
    virtual void ajouterPoint(CLpoint *pLpoint) ;
    virtual void message() ;
};
#endif //PROSIT_A_POINT__CLPARCOURS_H

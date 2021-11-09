//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURS2D_H
#define PROSIT_A_POINT__CLPARCOURS2D_H

#include <math.h>

#include "CLpoint.h"
#include "CLParcours.h"

class CLparcours2D:public CLParcours{

public:

    void ajouterPoint(CLpoint *p);
    double calculDistance();
    void message();

    CLparcours2D(int nbreDePointsTotal);

};



#endif //PROSIT_A_POINT__CLPARCOURS2D_H

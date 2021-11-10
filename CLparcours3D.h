//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPARCOURS3D_H
#define PROSIT_A_POINT__CLPARCOURS3D_H
#include <math.h>

#include "CLpoint3D.h"
#include "CLP3D.h"

class CLparcours3D:public CLP3D{

public:

    void ajouterPoint(CLpoint3D *p);
    double calculDistance();
    void message();

    CLparcours3D(int nbreDePointsTotal);


};


#endif //PROSIT_A_POINT__CLPARCOURS3D_H

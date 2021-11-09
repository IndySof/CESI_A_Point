//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPOINT3D_H
#define PROSIT_A_POINT__CLPOINT3D_H

#include "CLpoint.h"

class CLpoint3D: CLpoint{
protected:

public:
    int Z;
    CLpoint3D() {X=0; Y=0;}
    CLpoint3D(int X, int Y, int Z){
        this->X = X;
        this->Y = Y;
        this->Z = Z;
    }


};

#endif //PROSIT_A_POINT__CLPOINT3D_H

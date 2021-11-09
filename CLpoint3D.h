//
// Created by Indiana Sofia on 09/11/2021.
//

#ifndef PROSIT_A_POINT__CLPOINT3D_H
#define PROSIT_A_POINT__CLPOINT3D_H

#include "CLpoint.h"

class CLpoint3D: public CLpoint{


public:
    int XX;
    int YY;
    int ZZ;
    CLpoint3D() {XX=0; YY=0; ZZ=0;}
    CLpoint3D(int XX, int YY, int ZZ){
        this->XX = XX;
        this->YY = YY;
        this->ZZ = ZZ;
    }


};

#endif //PROSIT_A_POINT__CLPOINT3D_H

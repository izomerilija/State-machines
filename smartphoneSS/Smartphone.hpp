#ifndef SMARTPHONE_H_INCLUDED
#define SMARTPHONE_H_INCLUDED

#include "OpSystem.h"

enum PhoneStates {sON, sOFF, sSTANDBY, sUPDATE};

class Smartphone{
private:
    PhoneStates state;
    OpSystem system;
    int downloadingProgress;
public:
    Smartphone(){
        state = sOFF;
        downloadingProgress = -1;
    }
    Smartphone(PhoneStates state1, OpSystem os, int progress){
            state = state1;
            system = os;
            downloadingProgress = progress;
    }
    
};

#endif // SMARTPHONE_H_INCLUDED

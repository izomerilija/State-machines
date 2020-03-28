#ifndef SMARTPHONE_H_INCLUDED
#define SMARTPHONE_H_INCLUDED

#define PROGRESS_STEP 10
#define PROGRESS_MAX 100

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
    
    PhoneStates getPhoneState() const {
        return state;
    }
    OpSystem getOpSystem() const {
        return system;
    }

    bool turnOff(){
        if (state == sON){
            state = sOFF;
            return true;
        }
        return false;
    }
    bool turnOn(){
        if (state == sOFF){
            state = sON;
            return true;
        }
        return false;
    }
    bool sleep(){
        if (state == sON){
            state = sSTANDBY;
            return true;
        }
        return false;
    }
    bool wakeUp(){
        if (state == sSTANDBY){
            state = sON;
            return true;
        }
        return false;
    }

    bool startUpdate(int newVersionNumber){
        if (state != sOFF && state != sSTANDBY && state != sUPDATE){
            state = sUPDATE;
            downloadingProgress = 0;
            system.setVersion(newVersionNumber);
            return true;
        }
        return false;
    }
    bool downloadBatch(){
        if (state == sUPDATE && downloadingProgress + PROGRESS_STEP <= PROGRESS_MAX){
            downloadingProgress += PROGRESS_STEP;
            return true;
        }
        return false;
    }
    bool finishUpdate(){
        if (state == sUPDATE && downloadingProgress == 100){
            state = sON;
            downloadingProgress = -1;
            return true;
        }
        return false;
    }
    
};

#endif // SMARTPHONE_H_INCLUDED

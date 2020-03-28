#ifndef OPSYSTEM_H_INCLUDED
#define OPSYSTEM_H_INCLUDED

enum OS {Android, iOS};

class OpSystem{
private:
    OS type;
    int version;
public:
    OpSystem(){
        type = Android;
        version = 1;
    }
    OpSystem(OS tip, int verzija){
        type = tip;
        version = verzija;
    }
    
};


#endif // OPSYSTEM_H_INCLUDED

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
    
    OS getType() const {
        return type;
    }
    int getVersion() const {
        return version;
    }
    
    void setVersion(int verzija){
        version = verzija;
    }
    
};

#endif // OPSYSTEM_H_INCLUDED

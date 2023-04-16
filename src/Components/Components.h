#ifndef Components_h
#define Components_h
#include <Arduino.h>



class Components
{
private:
    
public:
    Components();
    ~Components();
    virtual void Initialize() = 0;
   
};


#endif
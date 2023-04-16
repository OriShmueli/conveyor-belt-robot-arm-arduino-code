#ifndef LCDScreen_h
#define LCDScreen_h

#include "Components/Components.h"


class LCDScreen : public Components
{
private:
    
public:
    LCDScreen();
    ~LCDScreen();
    void Write(const char* message);
    void Initialize() override;
    void Clear();
};

#endif
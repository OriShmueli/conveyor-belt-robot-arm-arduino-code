#ifndef FirstTimeOnState_h
#define FirstTimeOnState_h

#include "State_Machine/BaseState.h"

class FirstTimeOnState : public BaseState
{
private:
    String m_StartByte = "o";
public:
    FirstTimeOnState();
    ~FirstTimeOnState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};


#endif
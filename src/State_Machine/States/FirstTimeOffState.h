#ifndef FirstTimeOffState_h
#define FirstTimeOffState_h

#include "State_Machine/BaseState.h"

class FirstTimeOffState : public BaseState
{
private:
    String m_StartByte = "o";
public:
    FirstTimeOffState();
    ~FirstTimeOffState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};


#endif
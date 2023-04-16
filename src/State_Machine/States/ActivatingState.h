#ifndef ActivatingState_h
#define ActivatingState_h

#include "State_Machine/BaseState.h"

class ActivatingState : public BaseState
{
private:
    String m_StartByte = "a";
public:
    ActivatingState();
    ~ActivatingState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
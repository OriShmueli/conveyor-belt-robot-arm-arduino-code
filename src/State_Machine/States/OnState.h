#ifndef OnState_h
#define OnState_h

#include "State_Machine/BaseState.h"

class OnState : public BaseState
{
private:
    String m_StartByte = "o";
public:
    OnState();
    ~OnState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
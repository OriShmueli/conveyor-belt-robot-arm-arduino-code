#ifndef OffState_h
#define OffState_h

#include "State_Machine/BaseState.h"

class OffState : public BaseState
{
private:
    String m_StartByte = "o";
public:
    OffState();
    ~OffState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
#ifndef DeactivatingState_h
#define DeactivatingState_h

#include "State_Machine/BaseState.h"

class DeactivatingState : public BaseState
{
private:
    String m_StartByte = "d";
public:
    DeactivatingState();
    ~DeactivatingState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
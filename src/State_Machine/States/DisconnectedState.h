#ifndef DisconnectedState_h
#define DisconnectedState_h

#include "State_Machine/BaseState.h"

class DisconnectedState : public BaseState
{
private:
    String m_StartByte = "n";
public:
    DisconnectedState();
    ~DisconnectedState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};


#endif

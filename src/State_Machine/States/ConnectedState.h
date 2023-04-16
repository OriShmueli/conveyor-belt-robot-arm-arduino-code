#ifndef ConnectedState_h
#define ConnectedState_h

#include "State_Machine/BaseState.h"
#include "Components/OnOffSwitch/OnOffSwitch.h"
#include "FirstTimeOffState.h"
#include "FirstTimeOnState.h"

class ConnectedState : public BaseState
{
private:
    String m_startByte = "c";
public:
    ConnectedState();
    ~ConnectedState();
    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
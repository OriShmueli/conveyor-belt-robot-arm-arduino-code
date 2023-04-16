#ifndef EntryState_h
#define EntryState_h

#include "State_Machine/BaseState.h"
#include "ConnectedState.h"

class EntryState : public BaseState
{
private:
    String m_StartByte = "y";
public:
    EntryState();
    ~EntryState();

    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
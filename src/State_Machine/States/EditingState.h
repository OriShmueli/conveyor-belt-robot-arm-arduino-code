#ifndef EditingState_h
#define EditingState_h

#include "State_Machine/BaseState.h"

class EditingState : public BaseState
{
private:
    String m_StartByte = "e";
public:
    EditingState();
    ~EditingState();
    
    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};


#endif

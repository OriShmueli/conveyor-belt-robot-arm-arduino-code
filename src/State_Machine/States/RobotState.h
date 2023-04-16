#ifndef RobotState_h
#define RobotState_h

#include "State_Machine/BaseState.h"

class RobotState : public BaseState
{
private:
    String m_StartByte = "r";
public: 
    RobotState();
    ~RobotState();
    void EnterState() override;
    void ExitState() override;
    void ApplyData(const char* data) override;
    const String& GetStartByte() override;
    void SwitchedOn() override;
    void SwitchedOff() override;
};

#endif
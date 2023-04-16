#ifndef BaseState_h
#define BaseState_h

#include "StateMachine.h"
#include <Arduino.h>
#include <string.h>

class BaseState
{
protected:
    StateMachine* m_stateMachine;
    //Factory* m_factory;
    String ConnectedStateResponse = "r#c";
    String DisconnectedStateResponse = "r#d";
    String FirstTimeOnResponse = "o#n#f";
    String FirstTimeOffResponse = "o#f#f";
    String OnResponse = "o#n";
    String OffResponse = "o#f";
private:
    String m_StateStartByte = "s";
public:
    //BaseState(StateMachine* stateMachine);
    virtual ~BaseState();
    //void SwitchState(BaseState* newState);
    void SetContext(StateMachine* stateMachine);
    virtual void EnterState() = 0;
    virtual void ExitState() = 0;
    virtual void ApplyData(const char* data) = 0;
    virtual const String& GetStartByte() = 0;
    virtual void SwitchedOn() = 0;
    virtual void SwitchedOff() = 0;
    void CheckForDisconnection(const char* data);
    
    const String& GetStateStartingByte();
};

#endif
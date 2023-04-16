#include "FirstTimeOffState.h"
#include "OnState.h"

FirstTimeOffState::FirstTimeOffState()
{
}

FirstTimeOffState::~FirstTimeOffState()
{
}


void FirstTimeOffState::EnterState(){
    Serial.write(FirstTimeOffResponse.c_str()); //Confirmed First Off
}

void FirstTimeOffState::ExitState(){
    
}

void FirstTimeOffState::ApplyData(const char* data){

}

const String& FirstTimeOffState::GetStartByte(){
    return m_StartByte;
}


void FirstTimeOffState::SwitchedOn(){
     m_stateMachine->TransitionTo(new OnState);
}

void FirstTimeOffState::SwitchedOff(){
    
}
#include "FirstTimeOnState.h"
#include "FirstTimeOffState.h"

FirstTimeOnState::FirstTimeOnState()
{
}

FirstTimeOnState::~FirstTimeOnState()
{
}


void FirstTimeOnState::EnterState(){
    Serial.write(FirstTimeOnResponse.c_str()); // Confirmed First On
}

void FirstTimeOnState::ExitState(){

}

void FirstTimeOnState::ApplyData(const char* data){
    //checkforapplicationexit
    //checkfordisconnection

}

const String& FirstTimeOnState::GetStartByte(){
    return m_StartByte;
}


void FirstTimeOnState::SwitchedOn(){
    
}

void FirstTimeOnState::SwitchedOff(){
     m_stateMachine->TransitionTo(new FirstTimeOffState);
}
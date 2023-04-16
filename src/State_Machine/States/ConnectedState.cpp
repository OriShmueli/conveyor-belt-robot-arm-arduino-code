#include "ConnectedState.h"


ConnectedState::ConnectedState(/* args */)
{
}

ConnectedState::~ConnectedState()
{
}

void ConnectedState::EnterState(){
    Serial.write(ConnectedStateResponse.c_str());
    delay(100);
    if(m_stateMachine->m_onOffSwitch->GetSwitchPosition()){
        Serial.write(FirstTimeOnResponse.c_str());
    }else{
        Serial.write(FirstTimeOffResponse.c_str());
    }
}

void ConnectedState::ExitState(){

}

void ConnectedState::ApplyData(const char* data){
    if(data[2] == 'n'){
        m_stateMachine->TransitionTo(new FirstTimeOnState);
    }

    if(data[2] == 'f'){
        m_stateMachine->TransitionTo(new FirstTimeOffState);
    }
}

const String& ConnectedState::GetStartByte(){
    return m_startByte;
}


void ConnectedState::SwitchedOn(){

}

void ConnectedState::SwitchedOff(){
    
}
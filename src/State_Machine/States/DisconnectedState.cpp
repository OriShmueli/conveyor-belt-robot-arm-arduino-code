#include "DisconnectedState.h"

DisconnectedState::DisconnectedState()
{
}

DisconnectedState::~DisconnectedState()
{
}


void DisconnectedState::EnterState(){

}

void DisconnectedState::ExitState(){

}

void DisconnectedState::ApplyData(const char* data){
   
}

const String& DisconnectedState::GetStartByte(){
    return m_StartByte;
}

void DisconnectedState::SwitchedOn(){

}

void DisconnectedState::SwitchedOff(){
    
}
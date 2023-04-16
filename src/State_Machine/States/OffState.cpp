#include "OffState.h"


OffState::OffState()
{
}

OffState::~OffState()
{
}

void OffState::EnterState(){

}

void OffState::ApplyData(const char* data){

}

void OffState::ExitState(){

}

const String& OffState::GetStartByte(){
    return m_StartByte;
}


void OffState::SwitchedOn(){

}

void OffState::SwitchedOff(){
    
}
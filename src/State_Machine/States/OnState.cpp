#include "OnState.h"


OnState::OnState()
{
}

OnState::~OnState()
{
}

void OnState::EnterState(){
    Serial.write(OnResponse.c_str());
}

void OnState::ApplyData(const char* data){
    if(data[2] == 'n'){
        Serial.write(OnResponse.c_str());
    }
}

void OnState::ExitState(){

}

const String& OnState::GetStartByte(){
    return m_StartByte;
}

void OnState::SwitchedOn(){

}

void OnState::SwitchedOff(){
    
}
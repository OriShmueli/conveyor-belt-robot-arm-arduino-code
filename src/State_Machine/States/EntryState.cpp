#include "EntryState.h"

EntryState::EntryState(/* args */)
{
}

EntryState::~EntryState()
{
}

void EntryState::EnterState(){

}

void EntryState::ExitState(){
    
}

void EntryState::ApplyData(const char* data){
    if(data[0] == 's'){
        if(data[2] == 'c'){
            this->m_stateMachine->TransitionTo(new ConnectedState);
        }
    }
    //this->m_stateMachine->TransitionTo(new ConnectedState);
}

const String& EntryState::GetStartByte(){
    return m_StartByte;
}


void EntryState::SwitchedOn(){

}

void EntryState::SwitchedOff(){
    
}
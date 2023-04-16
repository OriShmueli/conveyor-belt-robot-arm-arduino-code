#include "BaseState.h"

//BaseState::BaseState(StateMachine* stateMachine)
//{
//    m_stateMachine = stateMachine;
//    //m_factory = factory;
//}

BaseState::~BaseState()
{
}

//void BaseState::SwitchState(BaseState* newState) {
//    ExitState();
//
//    newState->EnterState();
//    m_stateMachine->SetCurrentState(newState);
//}

void BaseState::SetContext(StateMachine* stateMachine)
{
    m_stateMachine = stateMachine;
}

const String& BaseState::GetStateStartingByte(){
    return m_StateStartByte;
}
#include "StateMachine.h"
#include "BaseState.h"

StateMachine::StateMachine(BaseState *newState) : m_currentState(nullptr)
{
    TransitionTo(newState);
    //m_Factory = new Factory(this);
    //m_currentState = m_Factory
}

StateMachine::~StateMachine()
{
    delete m_currentState;
    /*delete m_onOffSwitch;
    delete m_conveyorBeltMotor;
    delete m_lcdScreen;
    delete m_leds;
    delete m_robotArm;*/
}

void StateMachine::TransitionTo(BaseState* baseState) {
   
    if (this->m_currentState != nullptr) {
        m_currentState->ExitState();
        delete m_currentState;
    }
    //std::cout << "Transition to: " << typeid(*baseState).name() << std::endl;
    m_currentState = baseState;
    
    this->m_currentState->SetContext(this);
    m_currentState->EnterState();
}

void StateMachine::Request(const char* data, int length)
{
    String newData = data;
    //m_lcdScreen->Write(data);
    for (int i = 0; i < length; i++)
    {
            if(newData[i] == 'p'){
                newData.remove(i);
            }  
    }
    m_lcdScreen->Clear();
    m_lcdScreen->Write(newData.c_str());
    this->m_currentState->ApplyData(newData.c_str());
    
}

void StateMachine::InitializeComponents(){
    m_onOffSwitch = new OnOffSwitch();
    m_conveyorBeltMotor = new ConveyorBeltMotor();
    m_lcdScreen = new LCDScreen();
    m_leds = new LEDS();
    m_robotArm = new RobotArm();
    //m_components[0] = m_onOffSwitch;
}

BaseState* StateMachine::GetCurrentState(){
    if(m_currentState != nullptr){
        return m_currentState;
    }
    return nullptr;
}

void StateMachine::CheckOnOffState(){
    m_onOffSwitch->CheckOnOff(m_currentState);
}
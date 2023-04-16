#ifndef StateMachine_h
#define StateMachine_h
#include "Components/OnOffSwitch/OnOffSwitch.h"
#include "Components/Conveyor_Belt_Motor/ConveyorBeltMotor.h"
#include "Components/LCDScreen/LCDScreen.h"
#include "Components/LEDS/LEDS.h"
#include "Components/RobotArm/RobotArm.h"

class BaseState;

class StateMachine
{
private:

    
    //Factory* m_Factorsy;
    //Components** m_components = new Components*[5]();
   
BaseState* m_currentState;
public:

    StateMachine(BaseState* newState);
    OnOffSwitch* m_onOffSwitch;
    ConveyorBeltMotor* m_conveyorBeltMotor;
    LCDScreen* m_lcdScreen;
    LEDS* m_leds;
    RobotArm* m_robotArm;
    ~StateMachine();
    void TransitionTo(BaseState* baseState);
    void Request(const char* data, int length);
    void InitializeComponents();
    BaseState* GetCurrentState();
    void CheckOnOffState();
    //void HandleData();
};


#endif
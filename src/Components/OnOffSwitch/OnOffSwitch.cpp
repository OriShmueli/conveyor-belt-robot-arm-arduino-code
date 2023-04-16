#include "OnOffSwitch.h"
#include "State_Machine/BaseState.h"
OnOffSwitch::OnOffSwitch()
{
    pinMode(OnOffSwitchPin, INPUT_PULLUP);
    pinMode(m_offLed, OUTPUT);
    pinMode(m_onLed, OUTPUT);
}

OnOffSwitch::~OnOffSwitch()
{
}

void OnOffSwitch::Initialize(){
    //pinMode(OnOffSwitchPin, INPUT_PULLUP);
}

void OnOffSwitch::CheckOnOff(BaseState* currentState){
    m_switchPosition = digitalRead(OnOffSwitchPin);
    if(m_switchPosition == LOW){
        //off
        if(m_switchLightOnce){
            digitalWrite(m_offLed, HIGH);
            digitalWrite(m_onLed, LOW);
            m_switchLightOnce = false;
            m_switchPosition = false;
            currentState->SwitchedOff();
            return;
        }
        
    }else{
        //on
        if(m_initialize){
            m_switchLightOnce = false;
            m_initialize = false;
        }

        if(!m_switchLightOnce){
            digitalWrite(m_offLed, LOW);
            digitalWrite(m_onLed, HIGH);
            m_switchLightOnce = true;
            m_switchPosition = true;
            currentState->SwitchedOn();
            return;
        }
    }
}

bool OnOffSwitch::GetSwitchPosition(){
    return m_switchPosition;
}
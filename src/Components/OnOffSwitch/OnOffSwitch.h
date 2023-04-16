#ifndef OnOffSwitch_h
#define OnOffSwitch_h

#include "Components/Components.h"
//#include "State_Machine/BaseState.h"
class BaseState;

class OnOffSwitch : public Components
{
private:
    int m_offLed = 6;
    int m_onLed = 7;
    bool m_switchPosition;
    bool m_switchLightOnce = true;
    bool m_initialize = true;
public:
    OnOffSwitch();
    ~OnOffSwitch();
    void Initialize() override;
    const int OnOffSwitchPin = 4;
    void CheckOnOff(BaseState* currentState);
    //void CheckOnOff();
    bool GetSwitchPosition();
};

#endif
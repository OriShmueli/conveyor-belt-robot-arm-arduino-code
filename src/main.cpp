#include <Arduino.h>
#include "State_Machine/StateMachine.h"
#include "State_Machine/States/EntryState.h"

//arm base: 42 sec: 43 third: 44 end: 45
//back distance sensore: trig 53 echo 52
//front distance sensore: trig 23 echo 22
//white rgb led: b - 40, g - 41, r - 38
//rgb on off: b - 5, g - 6, r - 7 //not exsisting
//on led(green): yellow - ground. pin - 7 
//off led(red): brown - ground. pin - 6 
//on off switch: pin 4
//magnetic sensore: pin 39
//rgb robot: r- 37, g - 36, b- 35
//led blue: pin 3
//led yello: pin 2
//Line Tracking Sensor: pin 34
//esp: D1 - 32, D2 - 30
//plus led: gnd - black, pin - 29
//minus: gnd - white, pin -  28

const unsigned int MAX_LENGTH = 20;
StateMachine *stateMachine;
bool prevSwitchPosition = false;
//bool IsProgramOpen = false;

void setup() {
    Serial.begin(115200);
    stateMachine = new StateMachine(new EntryState);    
    stateMachine->InitializeComponents();
    stateMachine->CheckOnOffState();
    //IsProgramOpen = true;
    //prevSwitchPosition = stateMachine->m_onOffSwitch->GetSwitchPosition();
}


void loop() {
    stateMachine->CheckOnOffState();
    while (Serial.available() > 0)
    {
        //stateMachine->CheckOnOffState();
        static char message[MAX_LENGTH];
        static unsigned int message_pos = 0;
        char inByte = Serial.read();

        if(inByte != '\n' && (message_pos < MAX_LENGTH - 1)){
            message[message_pos] = inByte;
            message_pos++;
        }else{
            message[message_pos] = '\0';
            stateMachine->Request(message, message_pos);
            message_pos =0;
        }
    }


}
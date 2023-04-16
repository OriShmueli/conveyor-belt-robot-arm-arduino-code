#include "ConveyorBeltMotor.h"

ConveyorBeltMotor::ConveyorBeltMotor()
{
    pinMode(m_enB, OUTPUT);
    pinMode(m_in1, OUTPUT);
    pinMode(m_in2, OUTPUT);
    //only for safety
    SetDirectionRight();
    SetSpeed(180);
}

ConveyorBeltMotor::~ConveyorBeltMotor()
{
}

void ConveyorBeltMotor::Initialize(){
    //pinMode(m_enA, OUTPUT);
    /*pinMode(m_enB, OUTPUT);
    pinMode(m_in1, OUTPUT);
    pinMode(m_in2, OUTPUT);*/
    //pinMode(m_in3, OUTPUT);
    //pinMode(m_in4, OUTPUT);
}

void ConveyorBeltMotor::SetSpeed(int speed){
    this->m_speed = speed;
}

void ConveyorBeltMotor::StartConveyorBelt(){
    if(m_right){
        digitalWrite(m_in1, HIGH);
        digitalWrite(m_in2, LOW);
    }else{
        digitalWrite(m_in1, LOW);
        digitalWrite(m_in2, HIGH);
    }
    analogWrite(m_enB, m_speed);
}

void ConveyorBeltMotor::StopConveyorBelt(){
    digitalWrite(m_in1, LOW);
    digitalWrite(m_in2, LOW);
}

void ConveyorBeltMotor::SetDirectionLeft(){
    m_right = false;
}

void ConveyorBeltMotor::SetDirectionRight(){
    m_right = true;
}

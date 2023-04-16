#ifndef ConveyorBeltMotor_h
#define ConveyorBeltMotor_h

#include "Components/Components.h"

class ConveyorBeltMotor : public Components
{
private:
    int m_enA = 13; // Half bridge for Motor 1 Enable 
    int m_enB = 8; // Half bridge for Motor 2 Enable 
    int m_in1 = 12; // Control pin for Motor 1
    int m_in2 = 11; // Control pin for Motor 1
    int m_in3 = 10; // Control pin for Motor 2
    int m_in4 = 9; // Control pin for Motor 2
    int m_speed = 180;
    bool m_right = true;
public:
    ConveyorBeltMotor();
    ~ConveyorBeltMotor();
    void Initialize() override;
    void SetDirectionLeft();
    void SetDirectionRight();
    void StartConveyorBelt();
    void SetSpeed(int speed);
    void StopConveyorBelt();
};

#endif

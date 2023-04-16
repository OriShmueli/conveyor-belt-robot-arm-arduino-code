#ifndef RobotArm_h
#define RObotArm_h

#include "Components/Components.h"
#include <Servo.h>

class RobotArm : public Components
{
private:
    int m_servo1Base = 42;
    int m_servo2 = 43;
    int m_servo3 = 44;
    int m_servo4 = 45;
    Servo m_servoC1Base;
    Servo m_servoC2;
    Servo m_servoC3;
    Servo m_servoC4;
public:
    RobotArm();
    ~RobotArm();
    void Initialize() override;
};

#endif
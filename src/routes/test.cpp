#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
// PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);

void test() {
    // declare initial conditions
    PIDDataSet TestPara={4,0.1,0.2};
    MoveEncoderPID(TestPara, 100, 100, 0.4, 0, true);
    TurnMaxTimePID(TestPara, -90, 0.4, true);
    MoveEncoderPID(TestPara, 100, 10, 0.4, -90, true);
    TurnMaxTimepID(TestPara,-180, 0.4, true);
    MoveEncoderPID(TestPara, 100, 100, 0.4, -180, true);
    TurnMaxTimePID(TestPara, 90, 0.4, true);
    MoveEncoderPID(TestPara, 100, 10, 0.4, 90, true);
    TurnMaxTimePID(TestPara, 0, 0.4, true);
}

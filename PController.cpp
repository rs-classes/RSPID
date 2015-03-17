#include "include/PController.h"

PController::PController()
{
    SetGainP(0);
    InitP();
}

PController::PController(double gain)
{
    SetGainP(gain);
    InitP();
}

int PController::SetGainP(double gain)
{
    m_Kp = gain;
}

double PController::CalculateP(double error)
{
    return m_Kp * error;
}
PController::~PController()
{
}
void PController::InitP()
{
}

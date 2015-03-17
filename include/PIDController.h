#ifndef PIDCONTROLLER_H_
#define PIDCONTROLLER_H_

#include <stdio.h>
#include <stdlib.h>
#include "PController.h"

class PIDController: public PController
{
 public:
  PIDController();
  PIDController(double interval);
  PIDController(double interval, double gain);
  PIDController(double interval, double kp, double ki, double kd);

  int SetInterval(double interval);

  int SetGain(double gain);
  int SetGain(double kp, double ki, double kd);
 
  double Calculate(double error);
  
  ~PIDController();
 
 protected:
  void InitPID();

  double m_interval;
};

#endif

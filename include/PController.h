#ifndef PCONTROLLER_H_
#define PCONTROLLER_H_

#include <stdio.h>
#include <stdlib.h>

class PController
{
 public:
  PController();
  PController(double gain);
  int SetGainP(double gain);
  double CalculateP(double error);
  ~PController();
 protected:
  void InitP();

  double m_Kp;
};
#endif

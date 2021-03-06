#ifndef ROLLERBALL_H
#define ROLLERBALL_H
#include <string>
#include <iostream>
#include "pen.h"
class RollerBallPen : public Pen{
public:
  RollerBallPen(std::string pen_name)
    : Pen(pen_name) {}
  RollerBallPen() : Pen(std::string("RollerBallPen")){}
  virtual std::string drawLine();
  virtual std::string drawCircle();
};
#endif

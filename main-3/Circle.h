#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
// we could make this class final to not be derived
//  class Circle final: public Shape
{
public:
    Circle();
    void drow() override;
};

#endif

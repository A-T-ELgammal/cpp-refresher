#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
class Rectangle : public Shape
{
public:
    Rectangle();
    void drow() override;
    // ~Rectangle();
    Rectangle(string background) : Shape(background){};
};

#endif

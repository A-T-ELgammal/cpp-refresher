#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
// class Rectangle : public Shape
class Rectangle
{
public:
    Rectangle();
    // Shape inheritance and polymorphism
    //  void drow() override;
    //  ~Rectangle();
    //  Rectangle(string background) : Shape(background){};
    void setWidth(int width);

private:
    int width;
};

#endif

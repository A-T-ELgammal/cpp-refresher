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
    friend void printHeight(int height);

private:
    int width;
    int height;
};

void printHeight(int height)
{
    cout << height << endl;
}
#endif
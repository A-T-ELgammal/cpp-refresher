#include "Shape.h"
#include <iostream>
using namespace std;
Shape::Shape()
{
    cout << "shape constructor" << endl;
}
Shape::~Shape()
{
    cout << "Shape destructor" << endl;
}
void Shape::drow()
{
    cout << "drow the shape !!" << endl;
}
Shape::Shape(string background)
{
    setBackground(background);
}
string Shape::getBackground()
{
    return background;
}
void Shape::setBackground(const string &background)
{
    this->background = background;
}

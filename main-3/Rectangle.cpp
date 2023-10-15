#include "Rectangle.h"
#include <iostream>

using namespace std;
Rectangle::Rectangle()
{
    cout << "Rectangle constructor" << endl;
}

// void Rectangle::drow()
// {
//     cout << "drow rectangle !!" << endl;
// }

void Rectangle::setWidth(int width)
{
    if (width < 0)
        throw invalid_argument{"width is not negative value\n "};
    this->width = width;
    if (width > 100)
        throw out_of_range("width cannot be more than 100 !\n");
}

// Rectangle::~Rectangle()
// {
//     cout << "Rectangle destructor " << endl;
// }

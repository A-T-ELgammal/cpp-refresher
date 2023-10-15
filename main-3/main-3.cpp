#include "Rectangle.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Circle.h"
#include "DateTime.h"
using namespace std;

// when it pass by value it will be error of copying the object
// so we should pass by reference to be valid
void drowShape(Shape &S)
{
    S.drow();
}

int main()
{
    // apply inheritance of public members
    // Rectangle B;
    // Rectangle R(string("Blue"));
    // cout << R.getBackground() << endl;
    //////////////////////////////////////////
    // constructor and inheritance
    // base constructor always called before the derived constructor
    //////////////////////////////////////////
    // try destructor , the derived called first and base second
    //  Rectangle R;
    /////////////////////////////////////////
    // convert base object to derived is illegal and fine for vice versa
    // Rectangle R;
    // Shape S = R;
    // // ////////////////////
    // // // passing the object to function
    // showShape(R);
    // //////////////////////////////////////////
    // overriding methods
    // if you made the same functoin in base and derived clasees
    // after declare the object, the base function will implemented
    // to overriding method we add virtual keyword in base and override keyword
    // in the derived class , to be suitable foreach object it called
    // Rectangle R;
    // Shape S;
    // S.drow();
    /////////////////////////////////////////////
    // polymorphism --------------
    // vector<unique_ptr<Shape>> shapes;
    // shapes.push_back(make_unique<Circle>());
    // shapes.push_back(make_unique<Rectangle>());
    // for (const auto &shape : shapes)
    // {
    //     shape->drow();
    // }
    ////////////////////////////////////
    // abstract classes
    // Shape S;
    ////////////////////////////////////
    DateTime D{2, -3, 4, 5, 6, 7};
    cout << D.getYear();
    return 0;
}

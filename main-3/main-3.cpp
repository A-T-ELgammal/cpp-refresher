#include "Rectangle.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Circle.h"
#include "DateTime.h"
#include "AccountLocked.h"
using namespace std;

// when it pass by value it will be error of copying the object
// so we should pass by reference to be valid
// void drowShape(Shape &S)
// {
//     S.drow();
// }
/*when there are many function call each other , we could put the catch
block in anyone of them and try one for Exception for main function that works for
any error caught in anyone of it */
// void ctreateRectangle()
// {
//     Rectangle R;
//     R.setWidth(-1);
// }
//////////////////////////////
// we could make rethrowing an exception by make throw without doing thing to pass it to another block to make it catch again in the memory

// void ctreateRectangle()
// {
//     try
//     {
//         Rectangle R;
//         R.setWidth(-1);
//     }
//     catch (const invalid_argument ex)
//     {
//         cout << "close this section" << endl;
//         throw;
//     }
// }
// void doWork()
// {
//     ctreateRectangle();
// }
////////////////////////////////////
// create custom exceptions
void login()
{
    throw AccountLocked{};
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
    // DateTime D{2, -3, 4, 5, 6, 7};
    // cout << D.getYear();
    /////////////////////////////////////
    // try
    // {
    //     Rectangle R;
    //     int width;
    //     cout << "enter width: " << endl;
    //     cin >> width;
    //     R.setWidth(width);
    // }
    // catch (const invalid_argument &ex)
    // {
    //     cout << ex.what() << endl;
    // }
    // catch (const out_of_range &ex)
    // {
    //     cout << ex.what();
    // }
    // we could make all of these two catches into one logic error
    // if we let catch blocks , ordering them as specific first then
    // the general one like logic_error
    // catch (const logic_error &ex)
    // {
    //     cout << ex.what();
    // }
    // cout << "end of program " << endl;
    ////////////////////////////////////////////
    // try
    // {
    //     doWork();
    // }
    // // that will return any exception happened
    // catch (const exception &ex)
    // {
    //     cout << ex.what();
    // }
    ////////////////////////////////////////////////
    // create custom exception
    // try
    // {
    //     login();
    // }
    // catch (const exception &ex)
    // {
    //     cout << ex.what();
    // }
    ///////////////////////////////////////////////
    return 0;
}

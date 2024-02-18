#include <iostream>

class Myclass
{
public:
    void myFunction()
    {
        std::cout << "Hello World" << std::endl;
    }
};
class Date
{
public:
    int day, month, year;
    Date()
    {
        day = month = year = 0;
    }
    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        std::cout << "constructor \n";
    }
    void printDate()
    {
        std::printf("the date is :- %d : %d : %d \n", day, month, year);
    }
    virtual void display()
    {
        std::cout << "Date class" << std::endl;
    }
};
class Hour : public Date
{
public:
    void display()
    {
        std::cout << "Hour class" << std::endl;
    }
};
int main()
{
    // Myclass obj;
    // Myclass *ptr = &obj;
    // ptr->myFunction();

    // Date D, *dPtr;
    // D.setDate(1, 1, 2000);
    // D.printDate();
    // dPtr = &D;
    // dPtr->setDate(1, 2, 2022);
    // dPtr->printDate();
    // // array of objects with as pointer to object
    // Date *dates = new Date[3];
    // dates[0].setDate(2, 4, 1994);
    // dates[0].printDate();
    // pointer to inherited object
    Date *d;
    Hour h;
    // std::cout << "Date pointer to object\n";
    // d->display();
    // std::cout << "Hour pointer to object\n";
    // h.display();
    std::cout << d << std::endl;
    d = &h;
    d->display();
    // std::cout << "Date to Hour pointer to object\n";
    std::cout << d << std::endl;

    return 0;
}
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
};

int main()
{
    Myclass obj;
    Myclass *ptr = &obj;
    ptr->myFunction();

    Date D, *dPtr;
    D.setDate(1, 1, 2000);
    D.printDate();
    dPtr = &D;
    dPtr->setDate(1, 2, 2022);
    dPtr->printDate();
    // array of objects with as pointer to object
    Date *dates = new Date[3];
    dates[0].setDate(2, 4, 1994);
    dates[0].printDate();
    
    return 0;
}

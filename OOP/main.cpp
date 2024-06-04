#include <iostream>
#include <string>

using namespace std;

class MyClass{
private:
    

public:

};

class MyNumber
{
private:
    int *val1;
    int val2; 

public:
    MyNumber(string name)
    {
        cout << "ahmed constructor" << name << endl;
    }
    MyNumber(int x = 2, int y = 4) : MyNumber("ahmed")
    {
        cout << "second constructor" << endl;
        val1 = new int;
        *val1 = x;
        val2 = y;
    }
    ~MyNumber()
    {
        delete val1;
        val1 = nullptr;
        // default value
    }
    void PrintValueAndArea()
    {
        cout << "val1: " << *val1 << " address: " << val1 << "\n";
        cout << "val1: " << val2 << " address: " << &val2 << "\n";
    }
};

using namespace std;
int main()
{
    // MyNumber a;
    // a.PrintValueAndArea();
    // cout << endl;
    // b = a;
    // b.PrintValueAndArea();
    cout << "//////////// constructor delegation ////////////" << endl;
    MyNumber b(3, 5);
}

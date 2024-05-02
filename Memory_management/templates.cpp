#include <iostream>

using namespace std;

template <typename T>
T whichBigger(T a, T b)
{
    return (a > b) ? a : b;
}
// different template types of parameter
template <typename T, typename S>
void print(T name, S id)
{
    cout << "name: " << name << "id: " << id << endl;
}

int main()
{
    // treat the two arguments as one data type
    cout << whichBigger(3, 5) << endl;
    // if we want to specifiy the input data type
    cout << whichBigger<double>(2, 4.5);
    print("ahmed", 4933959823);

    return 0;
}

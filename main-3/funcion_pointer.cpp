#include <iostream>
#include <vector>

using namespace std;

void print()
{
    cout << "Hello world" << endl;
}

void printValue(int x)
{
    cout << "value: " << x;
}
void printVector(const vector<int> &a, void (*printElement)(int))
{
    for (int i : a)
    {
        printElement(i);
    }
}

int main()
{
    // vector<int> v = {1, 2, 4};
    // typedef void (*F)();
    // F f = print;

    // void (*c)();
    auto c = print;

    return 0;
}

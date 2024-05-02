#include <iostream>
#include <memory>
int main()
{
    std::unique_ptr<int> x(new int);
    std::cout << x;
    return 0;
}
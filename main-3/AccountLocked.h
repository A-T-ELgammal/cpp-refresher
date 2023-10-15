#ifndef ACCOUNTLOCKED_H
#define ACCOUNTLOCKED_H
#include <stdexcept>
using namespace std;
class AccountLocked : public exception
{
public:
    const char *what() const noexcept override
    {
        return "your account is locked \n";
    }
};
#endif
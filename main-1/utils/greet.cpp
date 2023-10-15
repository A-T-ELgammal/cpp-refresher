#include <string>
#include <iostream>
#include "greet.h"

using namespace std;

namespace messaging
{

    // function that convert char array to string
    //  must pass the length as argument because sizeof (char []) will return the size of the address pointer
    string StrFromCharArray(char charArr[], int len)
    {
        string b = "";
        for (int i = 0; i < len; i++)
        {
            b += charArr[i];
        }
        return b;
    }
    // passing strings by reference
    void greet(const string &name)
    // when passing by reference the variable name it could be changed after that ,
    // so the best practice is the const string &name
    {
        cout << "this is the name:   " << name << endl;
        // name = "a";
    }
}

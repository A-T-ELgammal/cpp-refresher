#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mp;
    mp = {
        {'A', 2},
        {'B', 5},
        {'C', 4},
        {'D', 3},
    };
    cout << mp['C'] << endl;
    cout << mp['A'] << endl;
    cout << mp['D'] << endl;
    cout << mp['R'] << endl; // return 0 for not found
    mp['J'] = 3;
    cout << mp['J'] << endl;
    pair<char, int> p1('K', 34);
    mp.insert(p1);
    cout << mp['K'] << endl;
    cout << p1.first << "  " << p1.second << endl;
    mp.clear();
    cout << mp.size() << endl;
    cout << mp.empty() << endl; // return 1 for true
    
    return 0;
}
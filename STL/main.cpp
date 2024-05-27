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
    // mp.clear();
    cout << mp.size() << endl;
    cout << mp.empty() << endl; // return 1 for true
    cout << "////////////////////////////" << endl;
    // iterate through the map
    for (map<char, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr)
    {
        cout << itr->first << "  ";
        cout << itr->second << endl;
    }
    cout << "////////////////////////////" << endl;

    // count the character in a string example
    string test = {"Hello World my name is ahmed! elgammal tttthhhhaaaa"};
    map<char, int> characterCount;
    for (char c : test)
        characterCount[c]++;

    for (map<char, int>::iterator i = characterCount.begin(); i != characterCount.end(); ++i)
        cout << i->first << "  " << i->second << endl;

    return 0;
}
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(4);
    q.push(5);

    cout << q.front() << " " << q.back() << endl;
    cout << q.size() << endl;
    cout << q.empty() << endl;

    q.pop();
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    queue<int> q1;
    q1.swap(q); // move same values of q to q1 and be empty
    cout << q1.front() << "  " << q1.back() << endl;
    q1.push(7);
    cout << boolalpha; // show every 0 or 1 with true or false
    cout << q1.back() << endl;
    cout << q.empty() << endl;
    cout << (q == q1) << endl;
    return 0;
}
#include <queue>
#include <iostream>

using namespace std;

bool max(int x, int y)
{
    return x > y;
}
int main()
{
    // max_heap priority queue
    priority_queue<int> q;
    q.push(5);
    q.push(4);
    q.push(7);
    q.push(1);

    while (!q.empty())
    {
        cout << q.top() << endl;
        q.pop();
    }

    // min heap priority_queue

    cout << "///////////////////" << endl;

    priority_queue<int, vector<int>, greater<int>> minQ;
    minQ.push(3);
    minQ.push(6);
    minQ.push(1);

    while (!minQ.empty())
    {
        cout << minQ.top() << endl;
        minQ.pop();
    }

    return 0;
}
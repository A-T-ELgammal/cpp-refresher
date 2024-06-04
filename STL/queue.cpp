#include <iostream>
#include <queue>

using namespace std;

class Student
{
public:
    int grade;
    Student(int grade)
    {
        this->grade = grade;
        cout << "Constructor called: " << grade << endl;
    }
    Student(const Student &student)
    {
        this->grade = student.grade;
        cout << "Copy constructor called: " << this->grade;
        cout << endl;
    }
    ~Student()
    {
        cout << "destructor called: " << this->grade << endl;
    }
};
struct Point
{
    int x, y;
    Point(int xval, int yval) : x(xval), y(yval) {}
};
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
    queue<Student> classroom;
    Student joe(90);
    classroom.push(joe);
    classroom.emplace(80);
    Student copy_constructor = classroom.back();
    classroom.pop();
    cout << "after the pop " << endl;
    // classroom.emplace(80);
    cout << "/////////\\\\\\\\\\" << endl;
    queue<Point> points;

    Point existingPoint(2, 4);
    points.push(existingPoint);

    points.emplace(3, 7);

    while (!points.empty())
    {
        Point point = points.front();
        cout << "point x: " << point.x << "point y: " << point.y << endl;
        points.pop();
    }

    return 0;
}
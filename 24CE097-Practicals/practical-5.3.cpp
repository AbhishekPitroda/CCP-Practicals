#include <iostream>
#include <vector>
using namespace std;
class Point
{
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    Point operator-() const
    {
        return Point(-x, -y);
    }
    Point operator+(const Point& other) const
    {
        return Point(x + other.x, y + other.y);
    }

    bool operator==(const Point& other) const
    {
        return x == other.x && y == other.y;
    }

    void display() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
class PointStack
{
    vector<Point> stack;

public:
    void push(const Point& p)
    {
        stack.push_back(p);
    }

    Point pop() {
        if (stack.empty())
        {
            throw out_of_range("Stack is empty");
        }
        Point top = stack.back();
        stack.pop_back();
        return top;
    }

    bool isEmpty() const
    {
        return stack.empty();
    }
};
int main() {
    Point p1(3, 4), p2(1, 2), result;
    PointStack history;
    history.push(p1);
    result = p1 + p2;
    result.display();
    history.push(result);
    result = -result;
    result.display();
    cout << (p1 == p2 ? "Equal" : "Not Equal") << endl;

    if (!history.isEmpty())
    {
        result = history.pop();
        cout << "Undo operation, current point: ";
        result.display();
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";

    return 0;
}

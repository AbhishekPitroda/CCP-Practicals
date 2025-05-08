#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual double Area() const = 0;
    virtual void display() const = 0;
    virtual ~Shape() {}
};
class Rectangle : public Shape
{
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double Area() const override
    {
        return length * width;
    }

    void display() const override
    {
        cout << "Rectangle Area: " << Area() << endl;
    }
};
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}

    double Area() const override
    {
        return M_PI * radius * radius;
    }

    void display() const override
    {
        cout << "Circle Area: " << Area() << endl;
    }
};

int main()
{
    vector<Shape*> shapeList;

    shapeList.push_back(new Rectangle(5, 3));
    shapeList.push_back(new Circle(4));

    cout << "Dynamic shape list:" << endl;
    for (Shape* shape : shapeList)
    {
        shape->display();
    }
    for (Shape* shape : shapeList)
    {
        delete shape;
    }
    Shape* staticShapes[2];
    staticShapes[0] = new Rectangle(2, 6);
    staticShapes[1] = new Circle(2.5);

    cout << "\nStatic shape array:" << endl;
    for (int i = 0; i < 2; ++i)
    {
        staticShapes[i]->display();
        delete staticShapes[i];
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

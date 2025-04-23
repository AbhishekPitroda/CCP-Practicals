/*A team of engineers was tasked with developing a program to calculate and manage the areas of
multiple circles for a design project. To achieve this, they devised a solution using a structured, object-
oriented approach. At the foundation of their solution was a base class that represented a generic
shape, responsible for storing and managing the radius of the circle. Building upon this, a specialized
class for circles was created to extend functionality by introducing a method for calculating the area
of a circle based on its radius. Using this framework, the team designed a system to handle multiple
circles, ensuring that the process of storing, calculating, and displaying the areas was efficient and
adaptable. They explored two different approaches for managing the collection of circles—one
focusing on flexibility and dynamic handling, while the other used a more static structure. By
implementing and comparing these methods, the engineers gained insights into the benefits of using
efficient techniques for organizing and processing geometric data, enhancing their problem-solving
capabilities.*/
#include<iostream>
#define PI 3.14
#include<vector>
using namespace std;
class Shape
{
protected:
    int radius;
public:
    void Enter_Value()
    {
        cout << "Radius is :";
        cin >> radius;
    }
};
class circle : private Shape
{
public:
    void Cal_Area()
    {
        Enter_Value();
        float area=PI*radius*radius;
        cout << "Area of circle is :" << area << endl << endl;
    }
};
int main()
{
    vector<Shape> circles;
    int Num_Circle;
    circle C1;
    cout << "Enter a Number of Circles :";
    cin >> Num_Circle;
    for(int i=0;i<Num_Circle;i++)
    {
        cout << "--*--*--*--*-- Circle - " << i+1 <<" --*--*--*--*--" << endl;
        C1.Cal_Area();
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

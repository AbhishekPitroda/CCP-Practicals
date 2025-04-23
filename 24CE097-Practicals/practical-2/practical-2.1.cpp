/*Write a program to define a Rectangle class with the following:
Data Members:
o length and width (private)
Member Functions:
o setDimensions(int l, int w) to set the length and width.
o area() to calculate and return the area of the rectangle.
o perimeter() to calculate and return the perimeter.
Tasks:
o Create multiple Rectangle objects.
o Initialize their dimensions and display their area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int width;
public :
    void setD(int l,int w)
    {
       length=l;
       width=w;
    }
    int area ()
    {
        return length*width;

    }
    int perimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    Rectangle R1,R2;

    R1.setD(3,4);
    R2.setD(6,10);

    R1.area();
    R2.area();

    R1.perimeter();
    R2.perimeter();

    cout << "--*--*--*-- For Rectangle-1 Details --*--*--*--" << endl;
    cout << "Area 1 :" << R1.area() << endl << "perimeter 1 :" << R1.perimeter() << endl << endl;
    cout << "--*--*--*-- For Rectangle-2 Details --*--*--*--" << endl;
    cout << "Area 2 :" << R2.area() << endl << "perimeter 2 :" << R2.perimeter() << endl << endl;
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

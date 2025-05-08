#include <iostream>
#include <queue>
using namespace std;

class Fahrenheit;

class Celsius
{
    float celsius;

public:
    Celsius(float c = 0) : celsius(c) {}

    operator Fahrenheit();

    float getValue() const
    {
        return celsius;
    }
    bool operator==(const Celsius& other) const
    {
        return celsius == other.celsius;
    }

    void display() const
    {
        cout << celsius << " C" << endl;
    }
};

class Fahrenheit
{
    float fahrenheit;

public:
    Fahrenheit(float f = 0) : fahrenheit(f) {}
    operator Celsius()
    {
        return Celsius((fahrenheit - 32) * 5 / 9);
    }

    float getValue() const
    {
        return fahrenheit;
    }
    bool operator==(const Fahrenheit& other) const
    {
        return fahrenheit == other.fahrenheit;
    }

    void display() const
    {
        cout << fahrenheit << " F" << endl;
    }
};
Celsius::operator Fahrenheit()
{
    return Fahrenheit((celsius * 9 / 5) + 32);
}

int main()
{
    Celsius c1(25.0);
    Fahrenheit f1 = c1;
    f1.display();

    Celsius c2 = f1;
    c2.display();
    cout << ((c1 == c2) ? "Equal temperatures" : "Different temperatures") << endl;
    queue<Fahrenheit> tempQueue;
    tempQueue.push(f1);
    tempQueue.push(Fahrenheit(100));

    cout << "Queue contents:" << endl;
    while (!tempQueue.empty())
    {
        tempQueue.front().display();
        tempQueue.pop();
    }
    Celsius tempArray[3] = { Celsius(0), Celsius(10), Celsius(20) };
    cout << "Array contents:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        tempArray[i].display();
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

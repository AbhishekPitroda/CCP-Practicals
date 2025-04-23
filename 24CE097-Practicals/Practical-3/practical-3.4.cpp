/*A technology firm aimed to develop a flexible and reusable solution for managing collections of various
data types, including integers, floating-point numbers, and characters. The system was intended to
perform fundamental operations on these collections, such as finding the maximum value, reversing
the collection, and displaying all elements. To achieve versatility and avoid redundancy in code, the
solution was designed to use function templates, allowing the same logic to be applied seamlessly to
different data types.
The team recognized the importance of using dynamic arrays to store the collections, enabling
efficient management of varying collection sizes. The design emphasized scalability and flexibility,
ensuring that the system could handle different data types and their associated operations with
minimal changes to the core logic.
In practice, the system allowed for the creation of collections for various data types, such as integers,
floating-point numbers, and characters. The operations on these collections included determining the
maximum value, reversing the order of elements, and printing the collection contents.*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template <typename T>

T Find_max(vector<T>&a)
{
    return *max_element(a.begin(),a.end());
}

template <typename T>
void Reverse_element(vector<T>&a)
{
    reverse(a.begin(),a.end());
    cout << "Reverse Array is :";
    for(int i=0; i<a.size(); i++)
    {
         cout << a[i] << " ";
    }
    cout << endl;
}

template <typename T>
void Display_elements(vector<T>&a)
{
    for(int i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    cout << "--*--*--*--*-- Integer - Collection --*--*--*--*--" << endl;
    vector<int>arr={12,25,56,32,88};
    Display_elements(arr);
    cout << endl;
    cout << "Maximum Value is :" << Find_max(arr);
    cout << endl;
    Reverse_element(arr);
    cout << endl;

    cout << "--*--*--*--*-- Float - Collection --*--*--*--*--" << endl;
    vector<float>brr={12.25,25.14,56.88,32.32,88.99};
    Display_elements(brr);
    cout << endl;
    cout << "Maximum Value is :" << Find_max(brr);
    cout << endl;
    Reverse_element(brr);
    cout << endl;

    cout << "--*--*--*--*-- Character - Collection --*--*--*--*--" << endl;
    vector<char>crr={'A','a','S','Q','T'};
    Display_elements(crr);
    cout << endl;
    cout << "Maximum Value is :" << Find_max(crr);
    cout << endl;
    Reverse_element(crr);
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;

}

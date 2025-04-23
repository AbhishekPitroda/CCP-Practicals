/*A data analytics company was tasked with developing a unique digital signature system based on the
concept of "super digits." The system required finding a single-digit representation of a given number
through recursive digit summation. The algorithm was defined as follows:
If the number has only one digit, it is its super digit. Otherwise, the super digit is the super digit of the
sum of its digits, repeated recursively until a single digit is obtained.
The challenge involved an additional complexity—constructing the number by concatenating a given
string representation of an integer multiple times. For example, if the number n was represented as a
string and concatenated k times, the super digit of the resulting number needed to be calculated.*/
#include<iostream>
#include<string>
using namespace std;
int Super_Digit(int N)
{
    if(N < 10)
    {
        cout << "Super Digit :" << N;
        return N;
    }
    else
    {
        int sum=0;
        while(N>0)
        {
            sum+=N%10;
            N/=10;
        }
        Super_Digit(sum);
    }
}
int main()
{
    string N;
    int K;
    cout << "Enter a Number :";
    cin >> N;
    cout << "Enter Number To How Many time repeat a Number :";
    cin >> K;
    int sum=0;
    for(int i=0;i<N.length();i++)
    {
        sum+=N[i]-'0';
    }
    sum*=K;
    Super_Digit(sum);
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

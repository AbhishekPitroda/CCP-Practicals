#include<iostream>
using namespace std;
class Student
{
    int Roll_No;
    string Name;
    int Mark[3];
public:
    Student()
    {
        Name="N/A";
        Roll_No=0;
        for(int i=0;i<3;i++)
        {
            Mark[i]=0;
        }
    }
    Student(int R_N,string S_N,int m1,int m2,int m3)
    {
        Roll_No=R_N;
        Name=S_N;
        Mark[0]=m1;
        Mark[1]=m2;
        Mark[2]=m3;
    }
    void Display_Data()
    {
        cout << "Roll Number is :" << Roll_No <<endl;
        cout << "Name is :" << Name << endl;
        for(int i=0;i<3;i++)
        {
            cout << "Mark " << i+1 << ":" << Mark[i] << endl;
        }
    }
    int Calculate_Avg()
    {
        int Sum=0;
        float Avg;
        for(int i=0;i<3;i++)
        {
            Sum+=Mark[i];
        }
        Avg=Sum/3;
        cout << "Average is :" << Avg << endl << endl;
        return 0;
    }
};
int main()
{
    Student S[3];
    S[0]=Student(97,"Abhishek",89,99,85);
    S[1]=Student(98,"Shivam",86,96,55);
    S[2]=Student();
    for(int i=0;i<3;i++)
    {
        cout << "--*--*--*-- Student " << i+1 << " Details --*--*--*--" << endl << endl;
        S[i].Display_Data();
        S[i].Calculate_Avg();
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
class Loan
{
    int L_Id;
    string L_Name;
    float L_Ammount;
    float I_Rate;
    int Term;
public:
    Loan()
    {
        L_Id=0;
        L_Name="N/A";
        L_Ammount=0.0;
        I_Rate=0.0;
        Term=0;
    }
    Loan(int LId,string L_N,float L_A,float I_R,int L_T)
    {
        L_Id=LId;
        L_Name=L_N;
        L_Ammount=L_A;
        I_Rate=I_R;
        Term=L_T;
    }
    void Display()
    {
        cout << "Id :" << L_Id <<endl;
        cout << "Name :" << L_Name << endl;
        cout << "Ammount :" << L_Ammount << endl;
        cout << "Intrest Rate :" << I_Rate << "%" <<endl;
        cout << "Month's :" << Term << endl;
    }
    void Cal_EMI()
    {
        double M_Irate=(I_Rate/12)/100;
        double EMI=(L_Ammount*M_Irate*pow((1+M_Irate),Term))/(pow((1+M_Irate),Term)-1);
        cout << "EMI is :" << EMI << endl << endl;
    }
};
int main()
{
    int LId;
    string L_N;
    float L_A;
    float I_R;
    int L_T;
    cout << "Enter Id :";
    cin >> LId;
    cout << "Enter Name :";
    cin >> L_N;
    cout << "Enter Ammount :";
    cin >> L_A;
    cout << "Enter Intrest Rate :";
    cin >> I_R;
    cout << "Enter Month's :";
    cin >> L_T;
    cout << endl;

    Loan l1(LId,L_N,L_A,I_R,L_T);
    cout << "--*--*--*-- Loan - 1 - Details --*--*--*--" << endl << endl;
    l1.Display();
    l1.Cal_EMI();

    Loan l2;
    cout << "--*--*--*-- Loan - 2 - Details --*--*--*--" << endl << endl;
    l2.Display();
    l2.Cal_EMI();
    cout<<endl<<endl<<"24CE097-Abhishek Pitroda"<<endl;
    return 0;
}

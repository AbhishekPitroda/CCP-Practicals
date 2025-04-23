#include<iostream>
using namespace std;
class Bank_Account
{
public:
    string Name;
    string Acc_no;
    double Balance;
    static int A_count;
    Bank_Account(string A_N,string A_Acc_no,double A_B)
    {
        Name=A_N;
        Acc_no=A_Acc_no;
        Balance=A_B;
        A_count++;
    }
    void Display_Details()
    {
        cout << "Account Holder's Name :" << Name << endl;
        cout << "Account Number :" << Acc_no << endl;
        cout << "Balance :" << Balance << endl << endl;
    }
};
void Transfer_Money(Bank_Account& Account1,Bank_Account& Account2,double Ammount)
{
    Account1.Balance-=Ammount;
    Account2.Balance+=Ammount;
    cout << "Transfer Ammount " << Ammount << " Account 1 to Account 2 : " << Account2.Balance << endl;
}
int Bank_Account:: A_count=0;
int main()
{
    Bank_Account Account1("Shrey","2356891251",50000);
    Bank_Account Account2("Dhyey","1769176917",40000);
    cout << "--*--*--*-- Account - 1 - Details --*--*--*--" << endl << endl;
    Account1.Display_Details();
    cout << "--*--*--*-- Account - 2 - Details --*--*--*--" << endl << endl;
    Account2.Display_Details();
    Transfer_Money(Account1,Account2,5000);
    cout << endl << "Total Account Created :" << Bank_Account:: A_count << endl;
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}


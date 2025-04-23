/*Design a simple class BankAccount to represent a bank account. It should have
the following:
Attributes:
o Account holder's name, account number, and balance.
Methods:
o deposit(amount): to add money to the account.
o withdraw(amount): to deduct money from the account if sufficient balance
exists. Otherwise, print an error message.
o display_balance() to show the current balance.
Requirements:
o Demonstrate object-oriented principles: encapsulation and abstraction.
o Test the class by creating multiple accounts and performing operations.*/
#include<iostream>
using namespace std;
class Bank_Account
{
    public:
    string Name;
    string Acc_number;
    double Balance;
    Bank_Account ()
    {
        Name="N/A";
        Acc_number="0";
        Balance=0;
    }
    Bank_Account (string A_n,double A_B,string A_c)
    {
        Name=A_n;
        Acc_number=A_c;
        Balance=A_B;
    }
    void detail()
    {
        cout << "Name :" << Name << endl;
        cout << "Acc_number :" << Acc_number << endl;
        cout << "Balance :" << Balance << endl << endl;
    }
    void Deposit(double d)
    {
        Balance+=d;
        cout << "Deposit :$" << d << endl;
    }
    void Withdraw(double w)
    {
        if(Balance>=w)
        {
            Balance-=w;
            cout << "Withdraw :$" << w << endl;
        }
        else
        {
            cout << "Error!!!";
        }
    }
    void Display()
    {
        cout << "Total Balance :$"<< Balance << endl << "--*--*--*--*--*--*--*--*--*--*--*--" << endl;
    }

};
int main()
{
    Bank_Account A1("Abhishek",60000,"2565465552");
    Bank_Account A2;
    A1.detail();
    A1.Deposit(800);
    A1.Withdraw(1000);
    A1.Display();

    A2.detail();
    A2.Deposit(500);
    A2.Withdraw(500);
    A2.Display();
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

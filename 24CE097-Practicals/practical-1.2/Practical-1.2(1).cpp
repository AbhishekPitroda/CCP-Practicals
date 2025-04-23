/*Write a program for an inventory management system using both procedural and
object-oriented approaches. The system should handle products with attributes:
ID, name, quantity, and price.
Implement these functionalities:
o Add a new product.
o Update the quantity of an existing product.
o Calculate the total price of all products.
Objective: Compare the procedural and object-oriented implementations by
evaluating code reusability and complexity.*/
#include<iostream>
using namespace std;

class Bank_Account
{
    public:
    string Account_Name;
    string Account_Number;
    double Account_Balance;

    Bank_Account(string A_Name,string A_Number,double A_Balance)
    {
        Account_Name = A_Name;
        Account_Number = A_Number;
        Account_Balance = A_Balance;
    }

    int Details()
    {
        cout<<"Account Name : "<<Account_Name<<endl;
        cout<<"Account Number : "<<Account_Number<<endl;
        cout<<"Account Balance : $"<<Account_Balance<<endl<<endl;
    }

    int Deposit(int d)
    {
        Account_Balance += d;
        cout<<"Deposited : $"<<d<<endl;
    }

    int Withdraw(int w)
    {
        if(Account_Balance>w)
        {
            Account_Balance -= w;
            cout<<"Withdrew : $"<<w<<endl;
        }
        else
        {
            cout<<"Not Sufficient Balance."<<endl;
        }
    }

    int Display_Balance()
    {
        cout<<"Total Balance : $"<<Account_Balance<<endl<<"---------------------------------"<<endl;
    }

};


int main()
{
Bank_Account Account_1("Abhishek Pitroda","2584662862",50000);
Bank_Account Account_2("Krish Sangani","7135648738",70000);

Account_1.Details();
Account_1.Deposit(500);
Account_1.Withdraw(2000);
Account_1.Display_Balance();

Account_2.Details();
Account_2.Deposit(3000);
Account_2.Withdraw(5000);
Account_2.Display_Balance();

cout<<endl<<"Name : Pitroda Abhishek"<<endl;
cout<<"Id   : 24CE097";

}

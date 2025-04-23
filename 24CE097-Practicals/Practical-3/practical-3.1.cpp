#include<iostream>
#include<vector>
using namespace std;
class Employee
{
    string Name;
    double B_Salary;
    double Bonus;
    double Total_Salary;
public:
    Employee(string E_N, double B_S, double E_B=100)
    {
        Name=E_N;
        B_Salary=B_S;
        Bonus=E_B;
    }
    void cal_salary()
    {
        Total_Salary=B_Salary+Bonus;
    }
    void Display()
    {
        cout << "Employee Name :" << Name << endl;
        cout << "Basic Salary :" << B_Salary << endl;
        cout << "Bonus :" << Bonus << endl;
        cout << "Total Salary is :" << Total_Salary << endl << endl;
    }
};
int main()
{
    int a=0;
    vector <Employee> emp;
    emp.push_back(Employee("Abhishek", 500000, 20000));
    emp.push_back(Employee("Shrey",-50));
    emp.push_back(Employee("Abhay", 100000, 10000));
    emp.push_back(Employee("Kishan",400000));

    for(auto& i : emp)
    {
        i.cal_salary();
        cout << "--*--*--*--*-- Employee - " << ++a<< " Details --*--*--*--*--" << endl;
        i.Display();
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

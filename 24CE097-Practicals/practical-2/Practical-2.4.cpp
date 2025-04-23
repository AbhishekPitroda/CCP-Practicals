#include<iostream>
using namespace std;
class Inventory_Item
{
public:
    int Product_Id;
    string P_Name;
    float Price;
    int Quantity;
    Inventory_Item()
    {
        P_Name="N/A";
        Product_Id=0;
        Price=0.0;
        Quantity=0;
    }
    Inventory_Item(string P_N,int P_Id,float P_P,int P_Q)
    {
        Product_Id=P_Id;
        P_Name=P_N;
        Price=P_P;
        Quantity=P_Q;
    }
    void Display_Details()
    {
        cout << "Product Name :" << P_Name << endl;
        cout << "Product Id Number :" << Product_Id << endl;
        cout << "Product Price :" << Price << endl;
        cout << "Quantity :" << Quantity << endl << endl;
    }
    void Add_Stock(int q, int a)
    {
        Quantity+=q;
        cout << "Updated Quantity is Product " << a << ":" << Quantity << endl;
    }
    void Sell_Item(int n, int b)
    {
        Quantity-=n;
        cout << "Sell Item Product " << b << " is :" << Quantity << endl;
    }
    void Print_Data()
    {
        cout << "Product Name :" << P_Name << endl;
        cout << "Product Id Number :" << Product_Id << endl;
        cout << "Product Price :" << Price << endl;
        cout << "Quantity :" << Quantity << endl;
    }
};
int main()
{
    cout <<"--*--*--*-- Product-1-Details --*--*--*--" << endl << endl;
    Inventory_Item P1("Milk",45,20.0,2);
    P1.Display_Details();
    cout <<"--*--*--*-- Product-2-Details --*--*--*--" << endl << endl;
    Inventory_Item P2;
    P2.Display_Details();
    cout << endl;
    P1.Add_Stock(3,1);
    P2.Add_Stock(4,2);
    cout << endl;
    P1.Sell_Item(1,1);
    P2.Sell_Item(3,2);
    cout << endl;
    P1.Print_Data();
    cout << endl;
    P2.Print_Data();
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

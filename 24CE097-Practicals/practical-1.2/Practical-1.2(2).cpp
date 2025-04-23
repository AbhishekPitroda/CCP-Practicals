/*/*Write a program for an inventory management system using both procedural and
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
class Product
{
    int Id;
    string Name;
    int Quantity;
    float Price;
public:
    Product(string P_N, int P_id, int P_Q, float P_P)
    {
        Name=P_N;
        Id=P_id;
        Quantity=P_Q;
        Price=P_P;
    }
    void Add_Product()
    {
        cout << "Product Name :" << Name << endl;
        cout << "Id Number :" << Id << endl;
        cout << "Quantity :" << Quantity << endl;
        cout << "Price :" << Price << endl;
    }
    void Update_Quantity(int q)
    {
        Quantity+=q;
        cout << "Updated Quantity is :" << Quantity << endl;
    }
    void Total_Price()
    {
        int TP = Price * Quantity;
        cout << "Total Price is :" << TP << endl << endl;
    }
};
int main()
{
    cout << "--*--*--*-- Product - 1 - Details --*--*--*--" << endl << endl;
    Product P1("Milk",56,3,200.0);
    P1.Add_Product();
    P1.Update_Quantity(3);
    P1.Total_Price();
    cout << "--*--*--*-- Product - 2 - Details --*--*--*--" << endl << endl;
    Product P2("Tea",66,8,100.0);
    P2.Add_Product();
    P2.Update_Quantity(1);
    P2.Total_Price();

    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int Non_Recursion(vector<int>arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout << "Sum is :" << sum << endl;
    return 0;
}
int main()
{
    int n;
    cout << "Enter a Size of Array:";
    cin >> n;
    vector<int>arr(n);
    for(auto& i:arr)
    {
        cout << "Enter a Element " << i+1 << ":";
        cin >> i;
    }
    Non_Recursion(arr,n);
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
    return 0;
}

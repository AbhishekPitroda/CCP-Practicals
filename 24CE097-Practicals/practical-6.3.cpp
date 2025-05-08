#include<iostream>
using namespace std;

int main()
{
    int n,m;

    int *arr1 = new int[n];
    int *arr2 = new int[m];

    cout<<"Enter The Size Of First Array(n) : ";
    cin>>n;

    cout<<endl;
    cout<<"Enter The Elements Of First Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter The Element "<<i+1<<" : ";
        cin>>arr1[i];
    }

    cout<<"--------------------------------------"<<endl;
    cout<<"Enter The Size Of Second Array(m) : ";
    cin>>m;

    cout<<endl;
    cout<<"Enter The Elements Of Second Array : "<<endl;
    for(int j=0;j<m;j++)
    {
        cout<<"Enter The Element "<<j+1<<" : ";
        cin>>arr2[j];
    }

    int *arr3 = new int[n+m];

    int i=0,j=0,k=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n)
    {
        arr3[k++] = arr1[i++];
    }

    while(j<m)
    {
        arr3[k++] = arr2[j++];
    }

    cout<<"--------------------------------------"<<endl;
    cout<<"Merged Array : ";
    for(int k=0;k<n+m;k++)
    {
        cout<<arr3[k]<<" ";
    }
    cout<<endl<<"Name : Pitroda Abhishek"<<endl;
    cout<<"Id   : 24CE097";
}

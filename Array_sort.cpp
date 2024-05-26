#include<iostream>
using namespace std;

int main()
{   
    int arSize;

    cout<<"Provide number of element of Array: ";
    cin>>arSize;

    int array1[arSize];

    for(int i=0;i<arSize;i++)
    {
        int value;
        cin>>value;
        array1[i] = value;
    }
    cout<<"Final Array: ";

    for(int i=0;i<arSize;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;


    for (int i=0;i<arSize;i++)
    {
        for (int j=0;j<arSize-1;j++)
        {
            if (array1[j]>array1[j + 1])
            {
                int temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }

    cout<<"Ascending Order: ";

    for (int i=0;i<arSize;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;


    cout<<"Descending Order: ";

    for (int i=arSize-1;i>=0;i--)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;

}

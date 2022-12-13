#include<bits/stdc++.h>
using namespace std;
void BS(int arr[],int size)
{   
    
    for(int i=0;i<size;i++)
    {   
        // int MIN = INT_MAX;
        for(int j=0;j<size-i;j++)
        {
        //    MIN = min(MIN,arr[j]);
        //    min(arr[i],arr[j]);
        //    swap(arr[j],arr[i]);
            if(arr[size-1-i]<arr[j])
            {
                swap(arr[size-1-i],arr[j]);
            }
        }
        cout<<"array after pass : "  <<i+1<<"is: ";
        for(int j=0;j<size;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Final Array is :::"<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;       
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    BS(arr,size);
return 0;
}
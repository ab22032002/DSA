#include<bits/stdc++.h>
using namespace std;
// Function Returning the array:
int* ArrayReverse(int arr[],int size)
    {  
       for(int i=0;i<size/2;i++)
       {
           swap(arr[i],arr[size-i-1]);
       }
       return arr;
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
// cout<<ArrayReverse(arr,size);
int *x = ArrayReverse(arr,size);
for(int k=0;k<size;k++)
{
    cout<<*(x+k)<<" ";
}
return 0;
}   
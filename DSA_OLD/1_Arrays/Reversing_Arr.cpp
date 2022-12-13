#include<bits/stdc++.h>
using namespace std;
// int* ArrayReverse(int arr[],int size)
//     {  
//        int p=&arr; 
//        for(int i=0;i<n/2;i++)10
//        {
//            swap(arr[i],arr[n-i-1]);
//        }
//        return *p;
//     }
void ArrayReverse(int arr[],int size)
    {  
    //    int p=&arr; 
       for(int i=0;i<size/2;i++)
       {
           swap(arr[i],arr[size-i-1]);
       }
       for(int i=0;i<size;i++)
       {
           cout<<arr[i]<<" ";
       }
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
/* reversing the array:*/
ArrayReverse(arr,size);
return 0;
}
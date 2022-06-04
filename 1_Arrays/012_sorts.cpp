#include<bits/stdc++.h>
using namespace std;
// int* ArrayInput()
// {
    
// }
int* sort_012(int arr[],int size)
{
    int c_1=0,c_2=0,c_0=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            c_0++;
        }
        else if(arr[i]==1)
        {
            c_1++;
        }
        else if(arr[i]==2)
        {
            c_2++;
        }
    }
    int i=0;
    for(;i<c_0;i++)
    {
       arr[i]=0;
    }
    for(;i<c_0+c_1;i++)
    {
       arr[i]=1;
    }
    for(;i<c_0+c_1+c_2;i++)
    {
       arr[i]=2;
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
    
    int *x = sort_012(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<*(x+i)<<" ";
    }
return 0;
}
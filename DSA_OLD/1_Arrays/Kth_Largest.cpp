#include<bits/stdc++.h>
using namespace std;
int  Kth_MAX(int arr[],int size,int k)
{   
    int MAX;
    for(int j=0;j<k;j++)
    {   
        MAX=INT_MIN;
        for(int i=0;i<size;i++)
        {
           MAX=max(MAX,arr[i]);
        }
        for(int i=0;i<size;i++)
        {
            if(arr[i]==MAX && j!=k-1)
            {
                arr[i]=INT_MIN;
            }
        }
        

    }
   return MAX;
}
int  Kth_MIN(int arr[],int size,int k)
{   
    int MIN;
    for(int j=0;j<k;j++)
    {   
        MIN=INT_MAX;
        for(int i=0;i<size;i++)
        {
          
           MIN=min(MIN,arr[i]);
        }
        for(int i=0;i<size;i++)
        {
            if(arr[i]==MIN&& j!=k-1)
            {
                arr[i]=INT_MAX;
            }
        }
        

    }
   return MIN;
}
int main()
{
    int size;       
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int arr[size];
    int k;
    cout<<"enter the Value of K "<<endl;
    cin>>k;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<Kth_MAX(arr,size,k)<<endl;
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<Kth_MIN(arr,size,k)<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}

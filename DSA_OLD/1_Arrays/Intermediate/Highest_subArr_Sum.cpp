#include<bits/stdc++.h>
using namespace std;
int Highest_subArr_sum(int arr[],int size)
{
    int MAX_OUT = INT_MIN;
    int sum=0;
    for(int i=0;i<size;i++)
    {   
        int MAX = INT_MIN;
        sum=0;
        for(int j=i;j<size;j++)
        {
            // cout<<arr[j]<<" ";
            sum+=arr[j];
            MAX= max(MAX,sum);
        }
        MAX_OUT = max(MAX_OUT,MAX);
        // cout<<MAX_OUT<<endl;
        // cout<<endl;
    }
    return MAX_OUT;
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
   cout<<Highest_subArr_sum(arr,size);
return 0;
}
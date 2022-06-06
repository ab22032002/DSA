#include<bits/stdc++.h>
using namespace std;
void SubArrayGen(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
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
    SubArrayGen(arr,size);
return 0;
}
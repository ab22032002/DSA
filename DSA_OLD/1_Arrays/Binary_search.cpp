#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int size,int key)
{
    int beg=0,end=size-1;
    sort(arr,arr+size);
    while(beg<=end)
    {
        int mid=(beg+end)/2;
        if(arr[mid]==key)
        {return mid;}
        else 
        if(arr[mid]>key)
        {end=mid-1;}
        else
        {beg=mid+1;}
    }
    return -1;
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
    int key;
    cout<<"enter your Key :"<<endl;
    cin>>key;
    cout<<"Your element at index:"<<BinarySearch(arr,size,key)<<endl;

return 0;
}
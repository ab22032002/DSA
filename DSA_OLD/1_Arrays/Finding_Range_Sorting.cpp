#include<bits/stdc++.h>
using namespace std;
int findRange(int arr[],int size)
{   
    sort(arr,arr+size);
    int mx= arr[size-1];
    int mn = arr[0];
    int range = mx-mn;
    if(range>0)
    {
        return range;
    }
    else
    return range*(-1);

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
    cout<<findRange(arr,size);
return 0;
}
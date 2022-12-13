#include<bits/stdc++.h>
using namespace std;
int max_in_arr(int a[],int size)
{
  int MAX=INT_MIN;
  for(int i=0;i<size;i++)
  {
    MAX=max(MAX,a[i]);
  }
  return MAX;
}
int min_in_arr(int a[],int size)
{
  int MIN=INT_MAX;
  for(int i=0;i<size;i++)
  {
    MIN=min(MIN,a[i]);
  }
  return MIN;
}
int findRange(int arr[],int size)
{
    int mx= max_in_arr(arr,size);
    int mn = min_in_arr(arr,size);
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
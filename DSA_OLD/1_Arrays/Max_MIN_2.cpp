#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter Your REspective Array"<<endl;
    for(int i=0;i<size;i++)
    {
      cin>>a[i];
    }
    for(int i=0;i<size;i++)
    {
        MAX=max(MAX,a[i]);
        MIN=min(MIN,a[i]);
    }
    cout<<"maximum VALue in THe array is :"<<MAX<<endl;
    cout<<"minimun value in the array is :"<<MIN<<endl;
return 0;
}
// int max_in_arr(int a[],int size)
// {
//   int MAX=INT_MIN;
//   for(int i=0;i<size,i++)
//   {
//     MAX=max(MAX,a[i]);
//   }
//   return MAX;
// }
// int min_in_arr(int a[],int size)
// {
//   int MIN=INT_MAX;
//   for(int i=0;i<size,i++)
//   {
//     MIN=max(MIN,a[i]);
//   }
//   return MIN;
// }
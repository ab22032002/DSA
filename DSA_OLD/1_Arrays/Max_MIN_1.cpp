#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter Your REspective Array"<<endl;
    for(int i=0;i<size;i++)
    {
      cin>>a[i];
    }
    sort(a,a+size);
    cout<<"Maximum element in the array is : "<<a[size-1];
    cout<<endl<<"min element in the array is :"<<a[0];
return 0;
}
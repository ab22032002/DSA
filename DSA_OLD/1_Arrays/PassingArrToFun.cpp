#include<bits/stdc++.h>
using namespace std;
// if we have to declare only 
// int sum(int[]) done
int sum(int arr[],int size)
{   
    int x =0;
    // int s= (sizeof(arr)/(sizeof(arr[1]))); this won't work here 
    for(int i=0;i<size;i++)
    {
       x+=arr[i];
    }
    return x;
}
void show(int arr[])
{
    cout<<sizeof(arr)<<endl;
    cout<<"as its treated as pointer only 'Pass by reference'"<<endl;
}
float avg(int sum,int size)
{
    float avg= sum*1.0/size;
    return avg;
}
int main()
{
int k[]={12,100,32,3,3,2,442,4,2,4,42,44,4};
int size = sizeof(k)/sizeof(k[0]); 
cout<<"this is sum of the array:"<<sum(k,size)<<endl;
// passing the size too
show(k);
cout<<avg(sum(k,size),size);
return 0;
}
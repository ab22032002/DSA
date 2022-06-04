#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        return i;
    }
    return -1;
}
int main()
{
int n;
cout<<"enter size of your array:"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int x;
cout<<"enter the number to be searched:"<<endl;
cin>>x;
/* Searching an element in the array :*/
cout<<"the element is present at index (1st encounter counts \n -1 indicates the value is not present in the array::::):)  "<<search(arr,n,x)<<endl;
return 0;
}
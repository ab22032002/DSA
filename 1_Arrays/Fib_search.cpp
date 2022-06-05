#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
int n;
cout<<"enter the value for n::"<<endl;
cin>>n;
v.push_back(0);
v.push_back(1);
int i=2;
while(v.at(v.size()-1)<n)
{ 
  int k = v[i-1]+v[i-2];
  v.push_back(k);
  i++;
}
// for(int i=0;i<v.size();i++)
// {
//     cout<<v[i]<<" ";
// }
// Storing the size of the vector at one place :::
int sz=v.size()-1;
int arr[n];
cout<<"enter the elements of the array::"<<endl;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
// IMPLEMENTING the FIB_search::
int sea_val;
cout<<"enter the value to be searched :::"<<endl;
cin>>sea_val;
// if(v[sz]==0)
// {cout<<"element not found:::"<<endl;
// exit(0);}
int offset= -1;
while(v[sz]!=0)
{
    
    int x= min(offset+v[sz-2],n-1);
    if(sea_val==arr[x])
    {
        cout<<"value got:::at index "<<x<<endl;
        break;
    }
    else if (sea_val>arr[x])
    {
        sz=sz-1;
        offset=x;
    }
    else if(sea_val<arr[x])
    {
        sz=sz-2;
    }
     
}
return 0;
}
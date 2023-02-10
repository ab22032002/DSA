#include<bits/stdc++.h>
using namespace std;
int pal(int x)
{  
   int a=x;
   int sum=0,num=0;
   while(x>0)
   {
    sum=x%10;
    x/=10;
    num=num*10+sum;
   }
   if(num==a)
   {
    // cout<<"yes"<<endl;
    return 1;
   }
   else
   {
    //cout<<"No"<<endl;
    return -1;
   }
}
int main()
{
int x=134312;
int y=1234321;
// cout<<"check if palinddrom or not "<<endl;
// cout<<x<<pal(x)<<endl;
// cout<<y<<" is a palindrom "<<pal(y)<<endl;
if(pal(x)==1)
cout<<"its A palindrom number"<<endl;
else 
cout<<"its not a palindrom number"<<endl;
if(pal(y)==1)
cout<<"its A palindrom number"<<endl;
else 
cout<<"its not a palindrom number"<<endl;
return 0;
}
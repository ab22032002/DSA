#include<bits/stdc++.h>
using namespace std;
// isPrime(int n)
// {
//     if(n==0||n==1)
//     return 0;
//     int rem=1;
//     int i=2;
//     while(i<=n/2)
//     {
//       rem =n%i;
//       if(rem==0)
//       return 0;
//       i++;
//     }
//     return 1;
// }
bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++)
       if(n%i==0)
       return false;
 
 return true;
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to check for Prime"<<endl;
cin>>a;
cout<<isPrime(a)<<endl;
cout<<"want to check more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}

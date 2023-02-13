#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if(n==1) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i=5;i<=sqrt(n);i=i+6)
       if(n%i==0||n%(i+2)==0)
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

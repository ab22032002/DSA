#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
    if(n==0)
    return 1;
    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*x;
}
int main()
{
int a;
int b;
string str;
string x="yes";
do
{
cout<<"enter  numbers  to calculate Power"<<endl;
cin>>a>>b;
cout<<power(a,b)<<endl;
cout<<"want to calculate more power(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
long long int  power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n&1)
            res=res*x;
        x*=x;
        n=n>>1;
    }
    return res;
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
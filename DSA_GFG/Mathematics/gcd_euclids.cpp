#include<bits/stdc++.h>
using namespace std;
int gcdx(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}
int main()
{
int a,b;
string str;
string x="yes";
do
{
cout<<"enter numbers to calculate gcd"<<endl;
cin>>a>>b;
cout<<gcdx(a,b)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
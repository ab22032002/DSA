#include<bits/stdc++.h>
#include"gcd.cpp"
using namespace std;
long long lcm(int a,int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
long long int a,b;
string str;
string x="yes";
do
{
cout<<"enter numbers to calculate lcm"<<endl;
cin>>a>>b;
cout<<lcm(a,b)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
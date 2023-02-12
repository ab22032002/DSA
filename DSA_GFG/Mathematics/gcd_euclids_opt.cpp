#include<bits/stdc++.h>
#include"gcd.cpp"
using namespace std;
int main()
{
long long int a,b;
string str;
string x="yes";
do
{
cout<<"enter numbers to calculate gcd"<<endl;
cin>>a>>b;
cout<<gcd(a,b)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
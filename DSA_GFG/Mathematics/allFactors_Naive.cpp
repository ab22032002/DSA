#include<bits/stdc++.h>
using namespace std;
void allFactors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {cout<<i<<" ";
        }
    }
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate factors"<<endl;
cin>>a;
// cout<<PrimeFactors(a)<<endl;
allFactors(a);
cout<<"want to calculate more factors(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
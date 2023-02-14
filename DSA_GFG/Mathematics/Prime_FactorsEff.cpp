#include<bits/stdc++.h>
using namespace std;
void PrimeFactors(int n)
{
    if(n<=1) return;
    while(n%2==0)
    {
        cout<<2<<" ";
        n/=2;
    }
    while(n%3==0)
    {
        cout<<3<<" ";
        n/=3;
    }
    for(int i =5;i<=sqrt(n);i=i+6)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<" ";
            n/=(i+2);
        }
    }
    if(n>3)
    cout<<n<<" ";

    cout<<endl;
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
PrimeFactors(a);
cout<<"want to calculate more factors(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
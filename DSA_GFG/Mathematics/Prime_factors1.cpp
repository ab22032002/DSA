#include<bits/stdc++.h>
using namespace std;
void PrimeFactors(int n)
{
    if(n<=1) return;
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            // print(i);
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)
    cout<<n<<" ";
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
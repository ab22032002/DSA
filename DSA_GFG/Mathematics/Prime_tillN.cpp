#include<bits/stdc++.h>
#include"isPrime.cpp"
using namespace std;
void Prime_tillN(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
        cout<<i<<" ";
    }
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate Prime_tillN"<<endl;
cin>>a;
Prime_tillN(a);
cout<<"want to calculate more Prime_tillN(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
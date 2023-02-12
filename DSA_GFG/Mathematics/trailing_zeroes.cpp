#include<bits/stdc++.h>
using namespace std;
int count_zeroes(int n)
{
    int fact=1;
    while(n>0)
    {
        fact*=n;
        n--;
    }
    int res=0;
    while(fact%10==0)
    {
        res++;
        fact/=10;
    }
    return res;
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate the number of trailing zeroes "<<endl;
cin>>a;
cout<<count_zeroes(a)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
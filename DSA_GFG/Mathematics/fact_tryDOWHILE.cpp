#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int fact=1;
    while(x>0)
    {
        fact*=x;
        x--;
    }
    return fact;
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate factorial"<<endl;
cin>>a;
cout<<fact(a)<<endl;
cout<<"want to calculate more factorial(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
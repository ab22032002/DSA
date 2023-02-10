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
cout<<"enter a number to calculate factorial"<<endl;
cin>>a;
cout<<fact(a);
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int Count_digits(int x)
{
    int res=0;
    while(x>0)
    {
    //   sum+=x%10;
    x/=10;
    res++;
    
    }
return res;
}
int main()
{
    int x=123456789;
    int sum=0;
    cout<<Count_digits(x)<<endl;
    // cout<<count<<endl;
    return 0;
}
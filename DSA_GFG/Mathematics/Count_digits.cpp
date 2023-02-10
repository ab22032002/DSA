#include<bits/stdc++.h>
using namespace std;
int main()
{
int x=123456789,sum=0,count=0;;
while(x>0)
{
  sum+=x%10;
  x/=10;
  count++;
}
cout<<sum<<endl;
cout<<count<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
/**  Generating the Fib::*/
vector<int> v;
int n;
cout<<"enter the value for n::"<<endl;
cin>>n;
v.push_back(0);
v.push_back(1);
int i=2;
while(v.at(v.size()-1)<n)
{ 
  int k = v[i-1]+v[i-2];
  v.push_back(k);
  i++;
}
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
return 0;
}
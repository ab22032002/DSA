#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
  return n*fact(n-1);
}
int main()
{
int n;
string str;
do
{
    cout<<"enter a number "<<endl;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<"want to calculate more ?"<<endl;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    
} while (str=="yes");

return 0;
}
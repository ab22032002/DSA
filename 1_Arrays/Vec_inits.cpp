#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>v1;
cout<<"sizeof vector v1 is "<<v1.size()<<endl;
vector<int>v2(5,2); 
vector<int>v4(5,30);
cout<<"elements of the vectors are :"<<endl;
for(int i=0;i<v2.size();i++)
{
    cout<<v4.at(i)<<" ";
}
cout<<""<<endl;
vector<int>v3(v2);
cout<<"elements of the vectors 3 are :"<<endl;
for(int i=0;i<v3.size();i++)
{
    cout<<v3.at(i)<<" ";
}
return 0;
}
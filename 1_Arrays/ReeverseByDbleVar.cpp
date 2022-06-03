#include<bits/stdc++.h>
using namespace std;
int main()
{
int k[10]={1,2,3,4,5,5,6,7,8,9};
int  i ,j,temp;
for(i=0,j=9;i<j;i++,j--)
{
    temp=k[i];
    k[i]=k[j];
    k[j]=temp;
}
for(int i=0; i<(sizeof(k)/sizeof(k[0]));i++)
{
    cout<<k[i]<<endl;
}
// cout<<k.length(); 
return 0;
}
/* THe logic of swaaping is present here although we hava just accessed the half of the element it covered all */
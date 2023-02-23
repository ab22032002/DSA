#include<bits/stdc++.h>
using namespace std;
int flipped(int x)
{
     int flipped;
     int i;
     for(i=1;i<x;i=i*2);
     flipped=(i-1)^(x);
     return flipped;
}
int main()
{
int k;
k=23;
cout<<"enter a number"<<endl;
cout<<flipped(k);
return 0;
}
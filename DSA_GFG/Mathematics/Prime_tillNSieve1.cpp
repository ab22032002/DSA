#include<bits/stdc++.h>
#include <iostream>
#include <limits.h>
using namespace std;

 void sieve(int n)
{
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate Prime_tillN"<<endl;
cin>>a;
sieve(a);
cout<<"want to calculate more Prime_tillN(yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
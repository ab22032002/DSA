#include <bits/stdc++.h>
using namespace std;
int countTrailingZeros(int n)
{
	int res = 0;

	for(int i=5; i<=n; i=i*5)
	{
		res = res + (n / i);
	}

	return res;
}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate no of trailing zeroes at the end of factorial"<<endl;
cin>>a;
cout<<countTrailingZeros(a)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
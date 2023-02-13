#include<bits/stdc++.h>
#include"isPrime.cpp"
using namespace std;
int exactly3Divisors(int n)
{   
    // bool isPrime(int );
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(isPrime(i)==1)
        count++;
    }
    return count;

}
int main()
{
int a;
string str;
string x="yes";
do
{
cout<<"enter a number to calculate number of exact3Divisors"<<endl;
cin>>a;
cout<<exactly3Divisors(a)<<endl;
cout<<"want to calculate more (yes/no)"<<endl;
cin>>str;
transform(str.begin(), str.end(), str.begin(), ::tolower);
} while ( str== x);
return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isPal(int n)
{
	int rev = 0;

	int temp = n;
    int ld=0;
	while(temp != 0)
	{
		ld = temp % 10;

		rev = rev * 10 + ld;

		temp = temp / 10;
	}	

	return (rev==n);
}
int main() {
    
    	int number;
        string str;
        do
        {
        cout<<"enter a number to be checked?"<<endl;
        cin>>number;
    	cout<<(bool)isPal(number)<<endl;
        cout<<"want to check more?"<<endl;
        cin>>str;
		(transform(str.begin(), str.end(), str.begin(), ::tolower));
        } while(str=="yes");
        
    	
    	return 0;
}
#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &vect)
   {   cout<<"roots are: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
vector<int> roots(int a,int b,int c)
{
    vector<int> vtr;
    double x,y,k,j;
    k=0.1*b*b-4*a*c;
    j=sqrt(k);
    if(k==0)
    {
        x=-1*b/(2.0*a);
        y=x;
        vtr.push_back(x);
        vtr.push_back(y);
    }
    else if(k>0)
    {
       x=(-b+j)/(2.0*a);
       y=(-b-j)/(2.0*a);
       vtr.push_back(x);
       vtr.push_back(y);
    }
    else
    {
        vtr.push_back(-1);
    }
    return vtr;
}
int main()
{
int a,b,c;
// print_vector(roots(a,b,c));
cout<<"enter the numbers in order"<<endl;
cin>>a>>b>>c;
vector<int> abc = roots(a,b,c);
print_vector(abc);
return 0;
}
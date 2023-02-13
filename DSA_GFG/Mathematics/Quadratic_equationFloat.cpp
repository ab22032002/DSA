#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<float> &vect)
   {   cout<<"roots are: ";
       for (auto i = vect.begin(); i != vect.end(); ++i)
        {cout<< *i << " ";}
   }
vector<float>roots(float a,float b,float c)
{
    double x,y;
    vector<float> vtr;
    if(b*b>4*a*c)
    {
    x=(-1*b+sqrt((b*b)-4*a*c))/(2*a);
    y=(-1*b-sqrt((b*b)-4*a*c))/(2*a);
    vtr.push_back(floor(x));
    vtr.push_back(floor(y));
    }
    else 
    vtr.push_back(-1);
    return vtr;

}
int main()
{
float a,b,c;
// print_vector(roots(a,b,c));
cout<<"enter the numbers in order"<<endl;
cin>>a>>b>>c;
vector<float> abc = roots(a,b,c);
print_vector(abc);
return 0;
}
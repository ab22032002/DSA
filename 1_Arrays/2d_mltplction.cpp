#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
#include<bits/stdc++.h>
using namespace std;
int main()
{
int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2];
int i,j,k;
cout<<"enter the rowwise matrix1"<<endl;
for(int i=0;i<ROW1;i++)
{
    for(int j=0;j<COL1;j++)
    {
        cin>>mat1[i][j];
    }
}
cout<<"enter the rowwise matrix2"<<endl;
for(int i=0;i<ROW2;i++)
{
    for(int j=0;j<COL2;j++)
    {
        cin>>mat2[i][j];
    }
}
/* Multiplication*/
for(int i=0;i<ROW1;i++)
{
    for(int j=0;j<COL2;j++)
    {
        mat3[i][j]=0;
        for(k=0;k<COL1;k++)
        {
            mat3[i][j]+= mat1[i][k]*mat2[k][i];
        }
    }
}
/* PRINTING THE MATRIX3 */
for(int i=0;i<ROW1;i++)
{
    for(int j=0;j<COL2;j++)
    {
        cout<<mat3[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
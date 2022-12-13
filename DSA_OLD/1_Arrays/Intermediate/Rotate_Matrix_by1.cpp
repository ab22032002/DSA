#include<bits/stdc++.h>
using namespace std;
// void Rotate_MatrixBYOne(int arr[][],int m , int n)
// {
//     int x= arr[0][0];
//     for(int i=0;i<m-1;i++)
//     {
//         arr[i][0]=arr[i+1][0];
//     }
//     for(int i=0;i<n-1;i++)
//     {
//         arr[n][i]=arr[n][i+1];
//     }
//     for(int i=m-1;i>=1;i--)
//     {
//         arr[i][m-1]=arr[i-1][m-1];
//     }
//     for(int i=n-1;i>=1;i--)
//     {
//         arr[0][i]=arr[0][i-1];
//     }
//     for(int i=0;i<m;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
int main()
{
    int m,n;
    cout<<"Enter the size of the array"<<endl;
    cin>>m>>n;
    int arr[m][n];
    cout<<"enter Your REspective Array"<<endl;
    for(int i=0;i<m;i++)
    { 
      for(int j=0;j<n;j++)
      {
        cin>>arr[i][j];
      }
      
    }
    // Rotate_MatrixBYOne( arr, m , n);
    
    int x= arr[0][0];
    for(int i=0;i<m-1;i++)
    {
        arr[i][0]=arr[i+1][0];
    }
    for(int i=0;i<n-1;i++)
    {
        arr[n-1][i]=arr[n-1][i+1];
    }
    for(int i=m-1;i>=1;i--)
    {
        arr[i][m-1]=arr[i-1][m-1];
    }
    for(int i=n-1;i>=1;i--)
    {
        arr[0][i]=arr[0][i-1];
    }
    arr[0][1]=x;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}
/* exp8_2:Sum of two matrix*/

# include <iostream>
using namespace std;

int main() 
{
    int x,y,i,j;
    cout<<"rows-";
    cin>>x;
    cout<<"column-";
    cin>>y;
    int mat1[x][y];
    int mat2[x][y];
   
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns["<<i<<"]["<<j<<"]=  ";
        cin>>mat1[i][j];
      } 
    }
     for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns1["<<i<<"]["<<j<<"]=  ";
        cin>>mat2[i][j];
      } 
    }

     int sum[i][j];
     for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        sum[i][j]=mat1[i][j]+mat2[i][j];

      }
    }
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<sum[i][j];
        cout<<" ";
      }
    cout<<endl;
    }
}
/*output
rows-2
column-2

s[0][0]=  2

s[0][1]=  6

s[1][0]=  4

s[1][1]=  3

s1[0][0]=  8

s1[0][1]=  0

s1[1][0]=  5

s1[1][1]=  7

10 6
9 10*/
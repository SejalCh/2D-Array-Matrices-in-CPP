/*Exp-8-MultidimensionL Array (Matrix)*/
/* exp8_1:To display a matrix*/

# include <iostream>
using namespace std;

int main() 
{
    int x,y,i,j;
    cout<<"rows-";
    cin>>x;
    cout<<"column-";
    cin>>y;
    int mat[x][y];
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns["<<i<<"]["<<j<<"]=  ";
        cin>>mat[i][j];
      } 
    }
     for ( i=0;i<x;i++)
     {
        for ( j=0;j<y;j++)
        {
           cout<<mat[i][j];
           cout<<"  ";
           
        }
        cout<<endl;
     }
}
/*output:
rows-2
column-2

s[0][0]=  5

s[0][1]=  10

s[1][0]=  15

s[1][1]=  20

5  10  
15  20  */
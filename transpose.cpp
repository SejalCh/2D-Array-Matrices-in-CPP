/* exp8_4:Transpose of a matrix*/
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
    ;
   
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns["<<i<<"]["<<j<<"]=  ";
        cin>>mat[i][j];
      } 
    }
    cout << "Transpose of Matrix : \n ";
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            cout << mat[j][i] << " ";
        cout << "\n ";
    }
    return 0;
   
}
/*Output
rows-2
column-2

s[0][0]=  7

s[0][1]=  6

s[1][0]=  1

s[1][1]=  9
Transpose of Matrix : 
 7 1 
 6 9 */

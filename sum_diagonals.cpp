/* exp8_3:Sum of diagonals in a matrix*/

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
   
   
    for ( i=0;i<x;i++)
    {
      for ( j=0;j<y;j++)
      {
        cout<<"\ns["<<i<<"]["<<j<<"]=  ";
        cin>>mat1[i][j];
      } 
    }
int sum_one = 0;
int sum_two = 0;
   for ( int i = 0; i < x; i++ ) {
      for ( int j = 0; j < y; j++ ) {
         if( i == j ) {
            sum_one = sum_one + mat1[ i ][ j ];
         }
         if( (i + j) == x - 1) {
            sum_two = sum_two + mat1[ i ][ j ];
         }
      }
   }
   cout << "The sum of first diagonal: " << sum_one << endl;
   cout << "The sum of second diagonal: " << sum_two << endl;
}
/*Output:
rows-3
column-3

s[0][0]=  1

s[0][1]=  2

s[0][2]=  4

s[1][0]=  6

s[1][1]=  7

s[1][2]=  0

s[2][0]=  5

s[2][1]=  3

s[2][2]=  1
The sum of first diagonal: 9
The sum of second diagonal: 16*/
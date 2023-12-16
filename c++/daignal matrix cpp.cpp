#include<iostream>
using namespace std;
int main()
{
  int sr=0,sl=0,n,i,j,mat[n][n];
  cout<<"enter the no of rows \n";
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cout<<"enter the matrix\n";
      cin>>mat[i][j];
      if(i==j)
      {
        sl=sl+mat[i][j];
      }
      if(i+j==n-1)
      {
       sr=sr+mat[i][j];
      }
    }
  }
  cout<<"left daignal is:\n"<<sl<<endl;
  cout<<"right daignol is :\n"<<sr<<endl;
  return 0;
}

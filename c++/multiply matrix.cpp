#include<iostream>
using namespace std;
int main()
{
int i,j,k,sum=0;
  int mat1[3][3],mat2[3][3],mat3[3][3];
  cout<<"enter the mat1\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
  cin>>mat1[i][j];
  }
  cout<<"enter the mat2 \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cin>>mat2[i][j];
  }
  cout<<"multiplying matrix\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      sum=0;
      for(k=0;k<3;k++)
      sum=sum+(mat1[i][k]*mat2[k][i]);
      mat3[i][j]=sum;
    }
  }
  cout<<"multiplication result \n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cout<<mat3[i][j]<<" ";
    cout<<endl;
  }
    return 0;
}


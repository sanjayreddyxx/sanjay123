#include<iostream>
using namespace std;
int main()
{
  int i,j;
  int mat1[3][3],mat2[3][3],mat3[3][3];
  cout<<"enter the mat1\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cin>>mat1[i][j];
  }
  cout<<"enter the second mat2\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cin>>mat2[i][j];
  }
  cout<<"adding mat1  and mat2\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      mat3[i][j]=mat1[i][j]+mat2[i][j];
  }
  cout<<"addition result\n";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      cout<<mat3[i][j]<<" ";
    cout<<endl;
  }
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int r,n,sum=0,sqr;
  cout<<"enter the number:\n";
  cin>>n;
  sqr=n*n;
  while(sqr!=0)
  {
    r=sqr%10;
    sum=sum+r;
    sqr=sqr/10;
  }
  if(sum==n)
  {
    cout<<"neon number";
  }
  else
  {
    cout<<"not an neon number";
  }
  return 0;
}

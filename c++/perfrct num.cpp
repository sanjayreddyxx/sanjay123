#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0;
  cout<<"enter the number\n";
  cin>>n;
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      sum+=i;
    }
  }
  if(sum==n)
    cout<<"perfect number";
  else
    cout<<"not perfect number";
  return 0;
}

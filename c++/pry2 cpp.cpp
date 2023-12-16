#include<iostream>
using namespace std;
int main()
{
  int i,j,k,n,s;
  cout<<"enter the number : \n";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(k=i;k<=2*i-1;k++)
    {
      cout<<k;
    }
    for(s=2*i-2;s>=i;s--)
    {
      cout<<s;
    }
    cout<<"\n";
  }
  return 0;
}

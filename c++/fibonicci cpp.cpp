#include<iostream>
using namespace std;
int main()
{
  int a=0,b=1,c,n,i;
  cout<<"enter the number:\n";
  cin>>n;
  for(i=0;i<=n;i++)
  {
    c=a+b;
    cout<<a;
    a=b;
    b=c;
  }
  return 0;
}

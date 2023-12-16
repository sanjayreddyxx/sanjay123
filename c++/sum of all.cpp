#include<iostream>
using namespace std;
int main()
{
  int n,temp,sum=0,r;
  cout<<"enter the number\n";
  cin>>n;
  temp=n;
  while(n>0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  cout<<"sum of all digits is :"<<sum ;
  return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int r,n,fact,i,temp,sum=0;
  cout<<"enter the number  : \n";
  cin>>n;
  temp=n;
  while(n!=0)
  {
    r=n%10;
  fact=1;
  for(i=1;i<=r;i++)
  {
    fact=fact*i;
  }
  sum=sum+fact;
  n=n/10;
}
  if(sum==temp)
    cout<<"strong \n";
  else
    cout<<"not strong ";
}

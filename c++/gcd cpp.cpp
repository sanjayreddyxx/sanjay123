#include<iostream>
using namespace std;
int main()
{
  int gcd,n1,n2,i;
  cout<<"enter the number : \n";
  cin>>n1>>n2;
  do
    for(i=1;i<=100;i++)
    {
      if(n1%i==0&&n2%i==0)
        gcd=i;
    }
  while(gcd>i);
  cout<<"gcd value is : "<<gcd;
}

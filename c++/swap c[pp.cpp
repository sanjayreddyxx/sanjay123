#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cout<<"enter the values\n";
  cin>>a>>b;
  a=a^b;
  b=a^b;
  a=a^b;
  cout<<"after swaping a is:\n"<<a<<endl;
  cout<<"after swaping b is:\n"<<b<<endl;
  return 0;
}

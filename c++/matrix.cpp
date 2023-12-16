#include<iostream>
using namespace std;
int main()
{
  int* n=new int[5];
  for(int i=0;i<5;i++)
  {
    n[i]=10*(i+1);
}
  {
  cout<<*n<<endl;
  cout<<*n+1<<endl;
  cout<<*n+2<<endl;
  cout<<*n+3<<endl;
  cout<<*n+4<<endl;
  *n++;
}
cout<<*n;
return 0;
}

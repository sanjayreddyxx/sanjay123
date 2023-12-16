#include<iostream>
using namespace std;
int main()
{
  int i,x,pos,n=10;
  int arr[100]={0};
  for(i=0;i<=10;i++)
  arr[i]=i+1;
  for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
  {
    x=30;
    pos=5;
    n++;
  }
  for(i=n-i;i>=pos;i--)
    arr[i]=arr[i-1];
  arr[pos-1]=x;
  for(i=0;i<n;i++)
    cout<<arr[i]<<endl;
}

#include<iostream>
using namespace std;
int main()
{
  float arr[]={1,2,3,4,5};
  float avg;
  float sum=0;
  int i,n;
  n=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  avg=sum/n;
  cout<<"avg is : "<<avg;
}

#include<iostream>
using namespace std;
int main()
{
  int i,sum=0;
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  int l=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<l;i++)
  {
    sum=sum+arr[i];
  }
  cout<<"the sum of all elements is :"<<sum;
  return 0;
}

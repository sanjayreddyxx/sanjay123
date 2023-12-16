#include<iostream>
using namespace std;
int main()
{
  int max,secondmax,i;
  int  arr[]={1,2,3,4,5,6};
  max=secondmax=arr[0];
  int l=sizeof(arr)/sizeof(arr[0]);
  for(i=0;i<l;i++)
  {
    if(arr[i]>max)
    {
      secondmax=max;
      max=arr[i];
    }
    else if(arr[i]>secondmax&&arr[i]<max)
    {
      secondmax=arr[i];
    }
  }
  cout<<"first max is : "<<max;
  cout<<"\nsecond max is : "<<secondmax;
  return 0;
}

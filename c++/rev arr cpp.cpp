#include<iostream>
using namespace std;
int main()
{
  int arr[]={1,2,3,4,5};
  int l=sizeof(arr)/sizeof(arr[0]);
  int temp;
  int i;
  for(i=0;i<l/2;i++)
  {
    temp=arr[i];
    arr[i]=arr[l-i-1];
    arr[l-i-1]=temp;
  }
  for(i=0;i<l;i++)
    cout<<arr[i];
}

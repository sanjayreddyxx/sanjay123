#include<iostream>
using namespace std;
int main()
{
  int n=5;
  int pos=3;
  int i;
  int arr[n];
  cout<<"enter the numbers :\n";
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(i=pos;i<n;i++)
  {
    arr[i]=arr[i+1];
    n--;
  }
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}

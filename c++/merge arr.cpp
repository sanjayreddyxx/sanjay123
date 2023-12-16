#include<iostream>
using namespace std;
int main()
{
  int arr1[]={1,2,3,4,5};
  int size1=sizeof(arr1)/sizeof(arr1[0]);
  int arr2[]={6,7,8,9,10};
  int size2=sizeof(arr2)/sizeof(arr2[0]);
  int mergesize=size1+size2;
  int mergearr[mergesize];
  int i=0,j=0,k=0;
  while(i<size1||j<size2)
    mergearr[k++]=(j==size2||(i<size1&&arr1[i]<arr2[j]))?arr1[i++]:arr2[j++];
  cout<<"order of merge is:"<<endl;
  for(i=0;i<mergesize;i++)
    cout<<mergearr[i]<<" ";
  return 0;
}

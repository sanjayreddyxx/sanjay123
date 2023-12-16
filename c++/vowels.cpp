#include<iostream>
using namespace std;
int main()
{
  char vowel;
  cout<<"enter an alphabet\n";
  cin>>vowel;
  if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u')
    cout<<"vowel";
  else
    cout<<"not an vowel";
  return 0;
}

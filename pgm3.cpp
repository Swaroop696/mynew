// reading the value of a refernce variable

#include<iostream>
using namespace std;

int main()
{
  int a;
  cout<<"Enter the value"<<endl;
  cin>>a;
  int &b=a;
  cout<<"The entered value is"<<b<<endl;
  return 0;
 }

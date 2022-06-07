// pass by reference 

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
 int a,b;
 cout<<"Enter a and b"<<endl;
 cin>>a>>b;
 cout<<"Before swapping "<<"a="<<a<<endl<<"b="<<b<<endl;
 swap(a,b);
 cout<<"After swapping"<<endl<<"a="<<a<<"b="<<b<<endl;
 return 0;
}

void swap(int &x,int &y)
{
  int temp=x;
  x=y;
  y=temp;
}

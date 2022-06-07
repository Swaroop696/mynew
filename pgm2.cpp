// Demonstrate the usage of reference variable

#include<iostream>
using namespace std;

int main()
{
 int a=10;
 int &b=a;
 int c=b++;
 cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;
 return 0;
}

// mutable data members

#include<iostream>
using namespace std;

class A
{
 private : mutable int x;
           mutable int y;
 public: void set(int a,int b)
         {
          x=a;
          y=b;
         }
         
         void alter() const
         {
          x++;
          y++;
         }
};

int main()
{
 A a1;
 a1.set(5,6);
 a1.alter();
 return 0;
}


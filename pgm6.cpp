// demonstrating the usage of this pointer

#include<iostream>
using namespace std;

class test
{
 public:int x;
  public: void setx(int x)
          {
            this->x=x;
          }
          
          void print()
          {
           cout<<x<<endl;
          }
};

int main()
{
 test t1;
 int x=20;
 t1.setx(x);
 t1.print();
 return 0;
}
 

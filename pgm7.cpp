// inheritance 2

#include<iostream>
using namespace std;

class Demo
{
 int a,b;
 public :
         void input(int a,int b)
         {
          this->a=a;
          this->b=b;
         }
         
         void output()
         {
          cout<<"the value of a nd b="<<a<<" "<<b;
         }
};

int main()
{
 Demo d1;
 d1.input(5,8);
 d1.output();
 return 0;
}

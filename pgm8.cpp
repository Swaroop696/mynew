// constant member function 

#include<iostream>
using namespace std;

class distance
{
 public:
 int ifeet;
 float finches;
 public: 
         void setdata(int ,float);
         void getdata() const;
};

void distance :: setdata(int x,int y)
{
  ifeet=x;
  finches=y;
}

void distance :: getdata() const
{
 ifeet++;
 finches=finches++ ;
 cout<<ifeet;
}

int main()
{ 
  distance d1;
  d1.setdata(5,6.0);
  d1.getdata();
  return 0;
}

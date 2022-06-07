// inheritance 

#include<iostream>
using namespace std;

class bike
{
  public:
  void welcome()
  {
    cout<<"this is a bike"<<endl;
  }
};

class car
{
  public:
  void hi()
  {
   cout<<"This is a car"<<endl;
  }
};

class vehicle:public bike,public car
{
  public:
  void chai()
  {cout<<"This is a vehicle"<<endl;}
};

int main()
{
  vehicle v;
  v.welcome();
  v.hi();
  v.chai();
}
  
  

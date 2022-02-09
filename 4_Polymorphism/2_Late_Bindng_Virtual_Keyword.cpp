#include<iostream>
using namespace std;
class Base
{ 
  public:
  int basevar = 10;

  virtual void Display()                          //Virtual Function......The virtual keyword will direct compiler to the derived class function.
  {
    cout<<"Data in Base class is "<<basevar<<endl;
  }
};

class Derived : public Base 
{ 
  public:
  int dervar = 20;

  void Display()
  {
    cout<<"Data in Derived class is "<<dervar<<endl;
  }
};

int main()
{
 Base *ptr;
 Derived obj;
 ptr = &obj;
 ptr->Display();
}



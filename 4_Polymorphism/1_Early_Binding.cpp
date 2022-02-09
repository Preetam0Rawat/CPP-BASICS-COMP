#include<iostream>
using namespace std;
class Base
{ 
  public:
  int basevar;

  void printdata()
  {
    cout<<"Data in Base class is "<<basevar<<endl;
  }
};

class Derived : public Base 
{ 
  public:
  int dervar;

  void printdata()
  {
    cout<<"Data in Derived class is "<<dervar<<endl;
  }
};

int main()
{
  
  Base *bptr;                      //Early Binding
  Derived obj;
  bptr = &obj;
  bptr->basevar = 10;
  bptr->printdata();
        //bptr->dervar = 69;       //Not allowed
}


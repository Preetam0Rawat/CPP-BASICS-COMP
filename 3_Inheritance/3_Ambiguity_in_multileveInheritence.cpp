#include<iostream>
using namespace std;
class A
{ 
  public:
    void display()
    {
      cout<<"A class"<<endl;
    }
};

class B : public A
{ 
  public:
    void display()
    {
      cout<<"B class"<<endl;
    }
};

class C: public B
{
  public:
    void display()
    {
      cout<<"C class ";                
    }
};

int main()
{
  C obj;
  obj.display();
}
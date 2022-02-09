#include<iostream>
using namespace std;

class Base1
{ int data1;
  public:
  Base1(int b)
  {
    data1 = b;
    cout<<"Base1 Constructor\n";
  }

  void printBase1data()
  {
    cout<<"Data in Base1   class is "<<data1<<endl;
  }
};

class Base2
{ int data2;
  public:
  Base2(int c)
  {
    data2 = c;
    cout<<"Base2 Constructor\n";
 }

  void printBase2data()
  {
    cout<<"Data in Base2   class is "<<data2<<endl;
  }
};

class Derived : public Base1, public Base2
{  int data3;
   public: 
   Derived(int a, int b, int c) : Base1(b) , Base2(c)                //Values to  Base class constructor has to be given from derived class
   {
     data3 = a;
     cout<<"Derived Constructor\n\n";

   }
    void printDeriveddata()
  {
    cout<<"Data in Derived class is "<<data3<<endl;
  }
};

int main()
{
  Derived obj(1, 2, 3);
  obj.printDeriveddata();
  obj.printBase1data();
  obj.printBase2data();


}
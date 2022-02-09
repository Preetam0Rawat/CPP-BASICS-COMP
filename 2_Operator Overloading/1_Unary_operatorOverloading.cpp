#include<iostream>
using namespace std;
class A
{   
   int a;
    public:  
      void setnum(int num)
      {
          a = num;
      }
 
      void operator ++()
       {  int val = ++a;
          cout<<val<<endl;
       }

       void operator ++(int)        // int so that compiler can differentiate between potfix and prefix increment.
       {  int val = a++;
          cout<<val<<endl;
       }
   
};

int main()
{
   A obj;
   obj.setnum(5);
   ++obj;              // obj.operator++();       // NOTE: operator++().obj is incorrect.

   obj++;              // obj.operator++(1);

    return 0;
}
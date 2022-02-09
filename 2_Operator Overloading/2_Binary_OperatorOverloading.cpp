#include<iostream>
using namespace std;
class Mango
{   
   int a;
   int b;
    public:  
      void setnum(int num1, int num2)
      {
          a = num1;
          b = num2;
      }
 
       
       void operator +(Mango SEED2)
       {
           cout<<this->a+SEED2.a<<endl;      // "this" here is of seed1.
           cout<<(*this).b+SEED2.b<<endl;     
       }
};

int main()
{
   Mango seed1, seed2;
   seed1.setnum(1,3);
   seed2.setnum(2,4);

   seed1 + seed2;        // seed1.operator +(seed2);   seed1 is the caller and seed 2 is the argument.
    return 0;
}
/*
  FRIEND FUNCTION IS USED WHEN WE WANT TO WORK ON DIFFERENT OBJECTS OR OBJECTS OF DIFFERENT CLASSES
  ONE THING IS THAT FRIEND FUNCTION MOSTLY TAKE OBJECTS AS ARGUMENT
*/
#include<iostream>
using namespace std;

class complex
{
  int a, b;
    public:
    friend complex addcomplex(complex C1, complex C2);
    complex(){ a = 0; b = 0; }                     // Default Constructor For C3/c3.
    complex(int n1, int n2)
     {
         a = n1;
         b = n2;
     }    

     void printnumber()
     {
         cout<<"Your number is: "<<a<<"+"<<b<<"i"<<endl; 
     }
};

complex addcomplex(complex C1, complex C2)
{
  complex C3;
  C3.a = C1.a + C2.a;
  C3.b = C1.b + C2.b;
  return C3;
}

int main()
{
    complex c1(1,2);        c1.printnumber();
    complex c2(3,4);        c2.printnumber();
    complex c3;
    c3 = addcomplex(c1, c2);

    c3.printnumber();

    return 0;
}
/*
  AS DISSCUSSED EARLIER FRIEND IS BEING USED HERE BECAUSE WE WANT TO WORK ON OBJECTS OF DIFFERENT CLASSES
*/
#include<iostream>
using namespace std;
class Second;
class First
{   
   int f;
    public:  
      friend void operator <(First , Second );
      void setnum(int num1)
      {
          f = num1;
      }
 
};

class Second
{   
   int s;
    public:
        friend void operator <(First , Second);
        void setnum(int num1)
      {
          s = num1;
      }
 
};
void operator <(First O1, Second O2)
{
  if(O1.f < O2.s)
    cout<<O1.f<<" is smaller"<<endl;
    else
        cout<<O2.s<<" is smaller"<<endl;

}

int main()
{
   First o1;      o1.setnum(2);
   Second o2;     o2.setnum(1);


   o1 < o2;          //one thing has to be kept in mind that 01 is not callind=g friend function, as no object  can call a friend function => o1.operator<(o2) is not happening in this case

    return 0;
}
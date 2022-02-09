/*
  Inhertence using protected visibility mode can be rather confusing
  Need of protected:
    1. Private data members can never be inherited
    2. There may be situations where we want to inherit the private members
    3. To solve this problem protected was introduced
    4. Protected mmembers can not be accessed with an object but can be inherited to a sub class, so the member function of the base class can access those data members

    Below code is an example of that 

*/

#include<iostream>
using namespace std;
class A
{ 
  protected:
        int a = 10;
      
  public:
        int b = 20;
  
};

class B : protected A
{  protected:
               // int a = 10;   This "a" will not be accessible by B's object, but the function of B can acces this "a".
               // int b = 20;
   public:

   void display()
   {
     cout<<"A is "<<a<<endl;        // No need to create "a" here as a is inherited.
   }
};

int main()
{
   B obj;
   //obj.a = 30;     Will throw error
   obj.display();
}
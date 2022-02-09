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

class B
{ 
  public:
    void display()
    {
      cout<<"B class"<<endl;
    }
};

class C: public A, public B
{
  public:
    void display()
    {
      A :: display();                //Method to solve the ambiguity
    }
};

int main()
{
  C obj;
  obj.display();
}

// #include<iostream>
// using namespace std;
// class A
// { 
//   public:
//     int a = 10;
//   void show()
//   {
//     cout<<"A in A class is "<<a<<endl;
//   }
// };

// class B
// { 
//   public:
//    int a = 70;

//   void show1()
//   {
//         cout<<"A in B class is "<<a<<endl;

//   }
// };

// class C: public A, public B
// {
//   public:
// };

// int main()
// {
//   C obj;
//   obj.a = 90;   // This will give ambiguous error as there are two "a", and compiler will get confused.
//   obj.show1();

// }

//********EASY FRIEND FUNCTION USE-------ADDING TWO DIFFERENT CLASS' VARIABLES******//

// #include<iostream>
// using namespace std;
// class B;
// class A
// {
//   int a;
//     public:
//       friend void add(A O1, B O2);
//       void setnum(int num)
//       {
//           a = num;
//       }
// };

// class B
// {
//   int b;
//     public:
//         friend void add(A O1, B O2);
//         void setnum(int num)
//       {
//           b = num;
//       }
// };
   
//  void add(A O1, B O2)
//  {
//      cout<<O1.a+O2.b<<endl;
//  }


// int main()
// {
//    A obj1;     obj1.setnum(5);
//    B obj2;     obj2.setnum(7);

//   add(obj1 , obj2);
//     return 0;
// }

//********COMPLEX FRIEND FUNCTION USE-------SWAPPING TWO DIFFERENT CLASS' VARIABLES--------USING REFERENCE OBJECT******//


#include<iostream>
using namespace std;
class B;
class A
{
  int a;
    public:
      friend void swap(A &, B &);
      void setnum(int num)
      {
          a = num;
      }
      void display()
      {
        cout<<"Value of a is: "<<a<<endl;;
      }
};

class B
{
  int b;
    public:
        friend void swap(A &, B &);
        void setnum(int num)
      {
          b = num;
      }

      void display()
      {
        cout<<"Value of b is: "<<b<<endl;
      }
};
   
 void swap(A &O1, B &O2)                     // O1 and O2 are reference objects. Give direct access to original object without the use of pointer
 {
   int temp = O1.a;
   O1.a = O2.b;
   O2.b = temp;
 }


int main()
{
   A obj1;     obj1.setnum(5);
   obj1.display();
   B obj2;     obj2.setnum(7);
   obj2.display();
   swap(obj1 , obj2);
   cout<<"After swapping using reference variable: "<<endl;
   
      obj1.display();
      obj2.display();

    return 0;
}
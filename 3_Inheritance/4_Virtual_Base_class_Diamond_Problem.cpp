/*                  A
                  /   \
                 B     C
                  \   /
                    D
   Diamond problem will be discussed here
   if a function in A is called or a data member in A is accessed then compiler get confused to access that from B or from C. In this case error is thrown. (case 1)
   But if the same function is present in  D then no problemo. (case 2)
   If same function is in B and in A, then still there will be a problem( NOTE that in multilevel inheritence there is no such ambiguity) because the same function cam be accessed throgh C also.(case 3)

*/


 /*-----------------------------CASE 1---------------------------*/
// #include<iostream>
// using namespace std;
// class A
// { 
//   public:
//   int a;
//     void display()
//     {
//       cout<<"A class"<<endl;
//     }
// };

// class B : public A
// { 
//   public:
//     void display2()
//     {
//       cout<<"B class"<<endl;
//     }
// };

// class C: public A
// {
//   public:
//     void display1()
//     {
//       cout<<"C class ";                
//     }
// };

// class D: public B, public C
// {
//   public:
   
// };

// int main()
// {
//   D obj;
//   obj.display();
// }





/*-----------------------------CASE 2---------------------------*/
// #include<iostream>
// using namespace std;
// class A
// { 
//   public:
//   int a;
//     void display()
//     {
//       cout<<"A class"<<endl;
//     }
// };

// class B : public A
// { 
//   public:
//     void display2()
//     {
//       cout<<"B class"<<endl;
//     }
// };

// class C: public A
// {
//   public:
//     void display1()
//     {
//       cout<<"C class ";                
//     }
// };

// class D: public B, public C
// {
//   public:
//    void display()
//     {
//       cout<<"A class"<<endl;
//     }
   
// };

// int main()
// {
//   D obj;
//   obj.display();
// }



/*-----------------------------CASE 3---------------------------*/

// #include<iostream>
// using namespace std;
// class A
// { 
//   public:
//   int a;
//     void display()
//     {
//       cout<<"A class"<<endl;
//     }
// };

// class B : public A
// { 
//   public:
//     void display()
//     {
//       cout<<"B class"<<endl;
//     }
// };

// class C: public A
// {
//   public:
//     void display1()
//     {
//       cout<<"C class ";                
//     }
// };

// class D: public B, public C
// {
//   public:
// //    void display()
// //     {
// //       cout<<"A class"<<endl;
// //     }
   
// };

// int main()
// {
//   D obj;
//   obj.display();
// }



/* Solution : now the solution of this ambiguity is "virtual Base Class" 

   When virtual base class is used a single copy of its data member is shared by all its derived class.
   Here B and C are sharing the same function display().
  */

#include<iostream>
using namespace std;
class A
{ 
  public:
  int a;
    void display()
    {
      cout<<"A class"<<endl;
    }
};

class B : virtual public A
{ 
  public:
    void display2()
    {
      cout<<"B class"<<endl;
    }
};

class C: virtual public A
{
  public:
    void display1()
    {
      cout<<"C class ";                
    }
};

class D: public B, public C
{
  public:
   
};

int main()
{
  D obj;
  obj.display();
}

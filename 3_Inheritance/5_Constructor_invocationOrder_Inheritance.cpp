// #include<iostream>
// using namespace std;
// class A
// { public:
//     A(){cout<<"A class con"<<endl;}

//    ~A(){cout<<"A class des"<<endl;}
// };

// class B : public A
// { public:
//      B(){cout<<"B class con"<<endl;}

//     ~B(){cout<<"B class des"<<endl;}
// };

// class C: public B
// {public:
//     C(){cout<<"C class con"<<endl;}

//    ~C(){cout<<"C class des"<<endl;}
// };

// int main()
// {
//   C obj;
// }


#include<iostream>
using namespace std;
class A
{ public:
    A(){cout<<"A class con"<<endl;}

   ~A(){cout<<"A class des"<<endl;}
};

class B 
{ public:
     B(){cout<<"B class con"<<endl;}

    ~B(){cout<<"B class des"<<endl;}
};

class C: public B, public A
{public:
    C(){cout<<"C class con"<<endl;}

   ~C(){cout<<"C class des"<<endl;}
};

int main()
{
  C obj;
}




// In case of multiple inheritance virtual base class's constrtuctor is invoked first.
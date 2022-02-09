#include<iostream>
using namespace std;

template<class T>
class preetu
{
    public:
      T data;
      preetu(T a)
      {
          data = a;
      }

      void display();
     
};

template <class T>                                                // To define display outside class
void preetu<T> :: display()                                        // void harry :: dispaly() {_ _ _}
{
   cout<<data<<endl;
}

int main()
{
    preetu<int>obj(5);
    obj.display();
}
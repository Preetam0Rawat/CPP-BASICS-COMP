#include <iostream>
#include <string>
using namespace std;
class student
{
  int age;
  static int count;

   public:

   student(int a)
   {
       this->age = a;
       count++;
   }
   void display()
   {
       cout<<"The age of the student is :"<<age<<endl;
   }

   static int  getcount(void)
   {
       return count;
   }
};

int student :: count;

int main()
{
    student s1(17),s2(18),s3(19),s4(20),s5(69);
    s1.display();
    s2.display();
    

    //cout<<"The total number of objects are :"<<s1.count<<endl;   //This will only work if static data member is public // s1 s2 s3 s4 can be used

  cout<<"The total number of objects are :"<<student :: getcount();
   
   return 0;
}
/* DIFFERENT WAYS TO CREATE LIST */

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{   list<int> :: iterator it;
    for(it = l.begin() ; it != l.end(); it++)
         cout<<*(it)<<" ";
}

int main() 
{
        list<int> list1;                      // An empty vector(zero length). Elements are added later.
        list<int> list2{1,2,3,4,5};           // A vector with 5 elements. {} These beacket are used.
        list<int> li3(list2);               // A vector creation using another vactor.
        list<int> list4(4,1);                 // A vector with 4 elements , all are 1( 4 1s).

     // cout<<list4.size()<<endl;
   
     // display(list4);
}
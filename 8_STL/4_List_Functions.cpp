/* 
 NOTE: Ther are many methods/member functions of list or any other stl. Can't learn all. 
       Only few are disscussed below 
*/

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l)
{   list<int> :: iterator it;
    for(it = l.begin() ; it != l.end(); it++)         // beign and end
         cout<<*(it)<<" ";
}

int main() 
{
        list<int> list1;
        //push_back
        list1.push_back(30);      list1.push_back(40);  
        //push_front 
        list1.push_front(20);      list1.push_front(10);  
        //pop_back
        list1.pop_back();
        //pop_front
        list1.pop_front();                  
        //size
        cout<<list1.size()<<endl;
        //remove
        list1.remove(20);
        display(list1);
}
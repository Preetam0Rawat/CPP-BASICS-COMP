#include<iostream>
using namespace std;

void display(int a)
{
    cout<<"fun int "<<a<<endl; 
}

template<class T>
void display(T a)
{
    cout<<"fun template "<<a<<endl; 
}

int main()
{
    display(4);                             //Highest priority is of exact match
    display(4.4);
    display('H');
}
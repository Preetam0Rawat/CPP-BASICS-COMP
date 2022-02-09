#include <iostream>
#include <string>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
    void setdata(void)
    {
        cout<<"Enter thr id "<<endl;
        cin>>id;
        count++;
    }

    void getdata(void)
    {
        cout<<"The id of this employee is "<<id<<endl;
    }

    static void getcount(void)                                              // Just like any other member function static member function can also be defined outisde class =>  void employee :: getcount();
    {
        cout<<"The value of count is "<<count<<endl;;
    }
};

int employee :: count;     // By default static data members are 0

int main()
{
    employee Preetam, Sam;            // Static data members acn be directly accessed by objects if not in private;

    Preetam.setdata();
    Preetam.getdata();

    employee :: getcount();           // Static function can't be accessed by objects

    Sam.setdata();
    Sam.getdata();

    employee :: getcount();
    return 0;
} 


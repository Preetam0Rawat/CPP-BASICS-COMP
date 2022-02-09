#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter two numbers to divide \n";
    cin>>a>>b;

    try
    {
        if(b == 0)
        {
            throw b;
        }
        else
        {
            c = a/b;
            cout<<"Result is = "<<c;
        }
    }

    catch(int x)
    {
        cout<<"Can't divide with "<<x;
    }
    
  return 0;
}
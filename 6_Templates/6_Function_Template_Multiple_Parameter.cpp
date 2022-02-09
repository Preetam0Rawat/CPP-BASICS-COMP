#include<iostream>
using namespace std;

template<class T , class U>
T calsum(T a, U b)
{
    T s = a+b;
    return s;
}

int main()
{
   float sum1;
   int sum2;

    sum1 = calsum<float, int>(3.3, 4.1);                  // Here <int, float> is not required as the compiler is smart enough to know the what datatypes identifiers are being passed as argument 
    // sum1 = calsum<int, float>(3.3, 4.1);  
    // sum1 = calsum(3, 4.1);  
    // sum1 = calsum(3.3, 4);  
     
    cout<<sum1<<endl;

}
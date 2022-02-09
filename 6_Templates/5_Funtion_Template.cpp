#include<iostream>
using namespace std;

template<class T>                // Or template<typename T> can also be used.
T calsum(T a, T b)
{
    T s = a+b;
    return s;
}

int main()
{
   float sum1;
   int sum2;

    sum1 = calsum<float>(3.2, 4.3);                  // Here <float> is not required as the compiler is smart enough to know the what datatypes identifiers are being passed as argument 
    sum2 = calsum<int>(3.2, 4.3); 
    cout<<sum1<<endl;
    cout<<sum2<<endl;

}
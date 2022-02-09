/* DIFFERENT WAYS TO CREATE VECTORS */

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i =0; i< v.size(); i++)
      cout<<v[i]<<" ";
}

int main() 
{
    vector<int> vect1;                      // An empty vector(zero length). Elements are added later.
    vector<int> vect2{1,2,3,4,5};           // A vector with 5 elements. {} These beacket are used.
    vector<int> vect3(vect2);               // A vector creation using another vactor.
    vector<int> vect4(4,1);                 // A vector with 4 elements , all are 1( 4 1s).

    // cout<<vect1.size()<<endl;
   
    // display(vect3);

}
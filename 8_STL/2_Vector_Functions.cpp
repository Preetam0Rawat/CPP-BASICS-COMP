/*
   NOTE: Ther are many methods/member functions of vector or any other stl. Can't learn all. 
         Only few are disscussed below 
*/

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v)
{
    for(int i =0; i< v.size(); i++)
       cout<<v[i]<<" ";
       //or cout<<v.at(i)<<" ";               //Print Vector Element
}

int main()
{
  vector<int> vect;                
  //push_back
  vect.push_back(10);   vect.push_back(20);   vect.push_back(30);   vect.push_back(40); 
  //pop_back
  vect.pop_back();      vect.pop_back();
  //size
  cout<<vect.size()<<endl;
  //begin
  vector<int> :: iterator iter = vect.begin();
  //insert
  vect.insert(iter+2, 50);
  
  
  display(vect);
}
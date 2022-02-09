#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string st;
  ofstream out("samplefile3.txt");     // or fstream out("samplefile3.txt", ios::out);
  out<<"Hello ";
  out.close();

  ifstream in("samplefile3.txt");      // or fstream in("samplefile3.txt", ios:in);
  getline(in,st);
  cout<<st;
  in.close();

  fstream appe("samplefile3.txt", ios :: app);
  appe<<"SF3";
  appe.close();
   
  ifstream din("samplefile3.txt");     // or fstream din("samplefile3.txt", ios:in);
  getline(din,st);
  cout<<st;
  din.close();
}
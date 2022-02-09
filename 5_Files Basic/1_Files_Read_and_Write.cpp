#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string st;
  ofstream out("samplefile1.txt");     
  out<<"Hello SF1";
  out.close();

  ifstream in("samplefile.txt");
  getline(in,st);
  cout<<st;
  in.close();

  return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  string st;
  ofstream out("samplefile2.txt");     
  out<<"Hello\n";
  out.close();


  fstream appe("samplefile2.txt", ios :: app);
  appe<<"SF2";
  appe.close();
   
  ifstream in("samplefile2.txt");
  while(in.eof() == 0)
  {
  getline(in,st);
  cout<<st<<endl;
  }
  in.close();
}
/*
  only few basic function.methods of maps are disscussed here. Not possible to learn all.  
*/
#include<iostream>
#include<map>
#include<string>
 
using namespace std;

void display(map<string,int> &m)
{
    map<string,int> :: iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)                // begin and end
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
}
 
int main(){
 
    
    map<string, int>  mymap;
    //insert
    mymap.insert({"Preetam", 10});  mymap.insert({"Aadi", 20});  mymap.insert({"Sam", 30});
    //size
    cout<<mymap.size()<<endl;
    //erase
        mymap.erase("Sam");                  //Direct
       
        map<string,int> :: iterator it;      //With iterator
        it  = mymap.find("Aadi");            //find 
        mymap.erase(it);
    

      display(mymap);
 
    return 0;
}
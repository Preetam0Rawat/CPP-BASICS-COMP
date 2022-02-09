/*
key value and mapped value = Both together are called pair
*/
#include<iostream>
#include<map>
using namespace std;

int main()
{       
        // 1st method, initialized map.
        map<int, string> m1;
           m1[1] = "abc";
           m1[2] = "def";
           m1[3] = "ghi";

       
        // 2nd method, empty map.
        map<int, string> m2;
        m2.insert({4, "afsds"});
        m2.insert(pair<int, string>(5, "sgg"));

      
        map<int,string> :: iterator it;
        for(it = m1.begin(); it != m1.end(); it++)                   //only working if key is int.
        {
                cout<<(*it).first<<" "<<(*it).second<<endl;;
        }


        

}
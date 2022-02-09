/*
   Only few basic algorith has been disscussed. There are a lot these.
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
        int arr[5] = {1, 5, 2 , 3, 4};
        vector<int> vect{20, 30, 10, 50, 40};

        //Sorting
        sort(arr, arr+5);
        sort(vect.begin(), vect.end());

        for(int i =0; i<5; i++)
           cout<<arr[i]<<" ";
           cout<<endl;

        for(int i =0; i<vect.size(); i++)
           cout<<vect[i]<<" ";             
           cout<<endl;

        //Reversing
        reverse(vect.begin(), vect.end());
          for(int i =0; i<vect.size(); i++)
           cout<<vect[i]<<" ";
           cout<<endl;

        //counting occurrences
         cout<<count(vect.begin(), vect.end(), 10);
}           
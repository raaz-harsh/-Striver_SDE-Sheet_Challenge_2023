#include <bits/stdc++.h>

 
//we are looping with the help of pointers.
vector<vector<int>> pairSum(vector<int> &arr, int s){

   sort(arr.begin(),arr.end());

   int i = 0;

   int j = arr.size()-1;

   vector<vector<int>> ans;

   while(i<arr.size()){

      if(j == i){

            j = arr.size()-1;

            i++;

         }

      if(arr[i]+arr[j]==s){

         ans.push_back({arr[i],arr[j]});

        /* if(j == i){

            j = arr.size()-1;

            i++;

         }

         */ //thes can be ignored, but it increases efficiency
         j--;
      }

      else{

         if(j == i){

            j = arr.size()-1;

            i++;

         }

         else{

            j--;

         }   

      }

   }

   return ans;

}
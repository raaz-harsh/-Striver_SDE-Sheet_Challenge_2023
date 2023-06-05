#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   // Write your code here.
   int sum=0,ans=0;
   int n=prices.size();
   int gmin=INT_MAX,gmax=0,minpos=-1,maxpos=n;
   for(int i=0;i<n;i++){
       if(prices[i]<gmin){
           gmin=prices[i];
           if(i<=maxpos)
           minpos=i;
           else{
               maxpos=i;
               gmax=prices[i];
           }
       }
       if(prices[i]>gmax){
           gmax=prices[i];
           if(i>=minpos){
               maxpos=i;
           }
           else{
               minpos=i;
               gmin=prices[i];
           }
       }
       sum=gmax-gmin;
       ans=max(ans,sum);
   }
   if(minpos>maxpos) return 0;
   sum=gmax-gmin;
   ans=max(ans,sum);
   return ans;
}

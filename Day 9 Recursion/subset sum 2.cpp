#include <bits/stdc++.h> 


void subset(int index,vector<vector<int>> &ans,vector<int> &ds, vector<int> &arr)
{
    ans.push_back(ds);
    for(int i = index; i < arr.size(); i++)
    {
        if(index != i && arr[i] == arr[i-1])continue;
        
        ds.push_back(arr[i]);
        subset(i+1,ans,ds,arr);
        ds.pop_back();//not take
        
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(), arr.end());
    subset(0,ans,ds,arr);

    return ans;
}
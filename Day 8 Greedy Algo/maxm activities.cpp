#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.

    vector<pair<int,pair<int,int>>> temp;

    for(int i = 0;i< start.size(); i++)
    {
        temp.push_back({finish[i],{i+1,start[i]}});

    }

    sort(temp.begin(),temp.end());

    int e = -1;
    int ans = 0;

    for(auto val : temp)
    {
        if(val.second.second >= e)
        {
            ans++;
            e = val.first;
        }
    }

return ans;
}
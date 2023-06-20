#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<pair<int,pair<int,int>>> ans;

    for(int i = 0 ; i< start.size(); i++)
    {
      ans.push_back({end[i], {i + 1, start[i]}});
    }

    sort(ans.begin(),ans.end()); //this sorts in ascending finish time

    int e = -1;
    vector<int> res;
    for(auto val : ans)
    {
        if(val.second.second > e )
        {
            res.push_back(val.second.first);
            e = val.first ;
        }
    }

return res;
}
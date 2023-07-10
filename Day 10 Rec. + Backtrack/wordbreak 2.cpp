#include <bits/stdc++.h>

void generate(string &s, string &t, unordered_map<string, bool> &ump, int idx, vector<string> &ans)
{
    if (idx == s.length())
    {
        ans.push_back(t);
        return;
    }

    for(int i=idx; i<s.length(); i++)
    {
        if (ump[s.substr(idx,i-idx+1)]) //we check from start to end index of string , if it is present in the map
        {
            t.append(s.substr(idx, i-idx+1));//t me store krna
            t.push_back(' ');//space between sentences
            generate(s, t, ump, i+1, ans);//check for next string with index +1
            int sz = t.length();
            t = t.substr(0, sz-(i-idx+2));
        }
    }

}

vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    unordered_map<string, bool> ump;
    for(auto &it: dictionary) ump[it] = true;
    vector<string> ans;
    string t;
    generate(s, t, ump, 0, ans);
    return ans;
}
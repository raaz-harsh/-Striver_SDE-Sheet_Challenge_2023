#include <bits/stdc++.h> 
bool findPattern(string p, string s)
{
    int index = s.find(p);
    if(index >= 0 && index < s.length())
    {
        return true;
    }
    else return false;
}
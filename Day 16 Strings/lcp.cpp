# include <bits/stdc++.h>


string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
     string ans="";

    sort(arr.begin(), arr.end());

    //this sorts something like this:
    //{"apple", "app", "application", "aptitude"}
    // after sort: {"app", "apple", "application", "aptitude"}
    //so now the substr cannot be more than arr[0] and the last element has the least common ele,
    //so agar jo jo match karega wohi sabme present hoga


    string s=arr[0];

    string e=arr[n-1];

    for(int i=0; i<s.size(); i++){

        if(s[i]!=e[i]){

        break;

        }

        ans=ans+s[i];

    }

    return ans;
}



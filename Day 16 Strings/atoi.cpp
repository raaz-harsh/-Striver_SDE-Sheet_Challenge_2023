#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    string res="";
    if(str[0]=='-'){
        res+=str[0];
    }
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9'){
            res+=str[i];
        }
    }
    return stoi(res);
}
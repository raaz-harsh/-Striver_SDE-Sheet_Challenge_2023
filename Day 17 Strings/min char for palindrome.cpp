#include<bits/stdc++.h>
int minCharsforPalindrome(string str) {
	int n = str.size();
	int i = 0, j = n - 1, count = 0, tempJ = j;
	while(i < j) {
		if(str[i] == str[j])
			i++, j--;
		else {
			count++;
			i = 0, tempJ--; //tempJ is used as j's value can be mismatched 
			//when if condition is triggered
			j = tempJ;
		}
	}	
	return count;
}
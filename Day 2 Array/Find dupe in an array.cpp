#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){

	int slow = arr[0]; //slow and fast pointers
	int fast = arr[0];

	do 
	{
		slow = arr[slow]; // step
		fast = arr[arr[fast]]; //two steps
	}
	while(slow != fast); //till they meet

	//after they meet, place fast at the start;

	fast = arr[0];
	//move them 1 steps and point of meet is dupe ele

	while(slow!=fast)
	{
		slow = arr[slow];
		fast = arr[fast];
	}

	return slow;
}

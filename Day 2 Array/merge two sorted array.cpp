#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int p1 = m -1;
	int p2 = n -1;
	int k = m + n -1; //create an pointer of length m + n -1
	while( p1 >= 0 || p2 >= 0)
	{// move pointers from end to start and compare and put the values
		if( arr1[p1]>= arr2[p2])
		{
			arr1[k] = arr1[p1];
			p1--;
			k--;
		}

		if(arr1[p1]< arr2[p2])
		{
			arr1[k] = arr2[p2];
			p2--;
			k--;
		}


	}


	return arr1;
}
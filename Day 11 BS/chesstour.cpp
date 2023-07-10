#include <bits/stdc++.h> 


bool possible(vector<int> positions , int n ,  int c, int mid)
{
	int count = 1;
	int lastpos = positions[0];

	for(int i = 0; i < n ; i++)
	{
		if(positions[i] - lastpos >= mid)
		{
			count++;
			if(count == c)
			{
				return true;
			}

			lastpos = positions[i];
		}
	}

	return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(), positions.end());
	//sorting to so that when we find the distance using last position, we get the correct distance
	int s = 0;
	int maxi = -1;
	for(int i = 0; i< n; i++)
	{
		maxi = max(maxi,positions[i]);
	}
	int e = maxi;
	int ans = -1;
	while(s<=e)
	{
		int mid = s + (e-s)/2;
		//FUNCTION TO CHECK THAT IS IT POSSIBLE KEEP THE PLAYER MID DISTANCE AHEAD

    //IF YES THEN CHECK FOR IS MID CAN BE MORE,since it is required to find the highest chess focus

    //IF NO THEM REDUCE THE DISTANCE BETWEEN TWO PLAYER
		if(possible(positions,n,c,mid))
		{
			ans = mid;
			s = mid+1;
		}

		else//if dist mid is not satisfied then we reduce mid
		{
			e = mid-1;
		}
	}

	return ans;
}
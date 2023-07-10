#include <bits/stdc++.h> 


bool ispossi(int n, int m, vector<int> time, long long int mid)
{
	int stdc = 1;
	long long int pagesum = 0;
	
	for(int i= 0; i<m; i++)
	{
		if(pagesum + time[i] <= mid)
		{
			pagesum+= time[i];
		}

		else
		{	stdc++;
			if(time[i]> mid || stdc > n)
			{
				return false;
			}

			pagesum = time[i];
		}
	}

	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long int s = 0;
	long long int sum = 0;
	for(int i = 0;i <m;i++)
	{
		sum+= time[i];

	}
	long long int e = sum;
	
	long long int ans = -1;
	long long int mid = s + (e-s)/2;
	
	

	while(s<=e)
	{
		if(ispossi(n,m,time,mid))
		{
			ans = mid;
			e = mid-1;

		}

		else
		{
			s = mid+1;
		}

		mid = s + (e-s)/2;

	}


	return ans;


}
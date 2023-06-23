void subset(vector<int> &num,int index,int sum,vector<int> &ans,int n)
{
	if(index == n)
	{
		ans.push_back(sum);
		return;
	}

	subset(num,index+1,sum+num[index],ans,n);
	subset(num,index+1,sum,ans,n);
}


vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	int index = 0;
	int n = num.size();
	vector<int> ans;
	subset(num,index,0,ans,n);
	sort(ans.begin(),ans.end());
	return ans;
}
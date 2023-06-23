void subset(int i,int sum,vector<int> &temp,vector<vector<int>> &ans,vector<int> arr, int n, int k)
{
    if(i == n )
    {
        
         if(sum == k)
        {
            ans.push_back(temp);
            
        }
        return;
    
    }

   
    subset(i+1,sum,temp,ans,arr,n,k);
    temp.push_back(arr[i]);

    subset(i+1,sum + arr[i],temp,ans,arr,n,k);
    temp.pop_back();
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here
    vector<vector<int>> ans;
    vector<int> temp;

    int sum = 0;
    subset(0,sum,temp,ans,arr,n,k);

    return ans;
}
int singleNonDuplicate(vector<int>& arr)
{	
	if (arr.size() == 1) return arr[0];
	int h = arr.size() -2;
	if(arr[0] != arr[1])return arr[0];
	if(arr[h+1] != arr[h]) return arr[h+1];

	int l = 1;

	//we define our search space from 1 to n -1 of array and sepeartly check the edge case

	while(l<=h)
	{
		int mid = (l + h)/2;

		if(arr[mid] != arr[mid+1] && arr[mid] != arr[mid-1])
		{
			return arr[mid];
		}
		if((mid%2 == 0 && arr[mid] == arr[mid+1]) || (mid%2 == 1 && arr[mid] == arr[mid-1]))
		{
			l = mid + 1;
		}

		else h = mid -1;
	}

	return -1;

}
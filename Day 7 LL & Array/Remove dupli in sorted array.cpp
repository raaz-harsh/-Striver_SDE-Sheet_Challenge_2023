int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for(int j = i+1;j< n; j++)
	{
		if(arr[j]!= arr[i])
		{
			i++;
			arr[i] = arr[j];
		}
	}

	return i +1;
}
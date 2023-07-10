int func(int mid, int n, int m)
{
  long long ans =1;
  for(int i = 1; i <=n; i++)
  {
    ans *= mid;// to find m

    if(ans> m)return 2;// out of range
  }

  if(ans == m)return 1; //found it
  return 0; //
}


int NthRoot(int n, int m) {
  // Write your code here.
  int s = 1;
  int e = m;
  //int mid = s + (e-s)/2;

  while(s<=e)
  {
    int mid = s + (e-s)/2;
    int midN = func(mid,n,m); //middle number

    if (midN == 1) {
      return mid;
    } // found the target
    else if (midN == 0) {
      s = mid + 1;
    } 
    else {
      e = mid - 1;
    }
  }

  return -1;

}
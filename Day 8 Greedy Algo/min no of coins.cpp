#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector < int > ans;
    int cnt = 0;
    int V = amount;
  int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
  int n = 9;
  for (int i = n - 1; i >= 0; i--) 
  {
    while (V >= coins[i]) {
      V -= coins[i];
      //ans.push_back(coins[i]);
      cnt++;
    }
  }

    return cnt;
}

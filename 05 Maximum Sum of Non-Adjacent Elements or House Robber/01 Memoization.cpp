#include <bits/stdc++.h>
using namespace std;

int solveUtil(int ind, vector<int>& arr, vector<int>& dp){
    
    if(ind == 0) return arr[ind];
    if(ind < 0)  return 0;
    if(dp[ind] != -1) return dp[ind];
    
    int pick = arr[ind] + solveUtil(ind-2, arr, dp);
    int nonPick = 0 + solveUtil(ind-1, arr, dp);
    
    return dp[ind] = max(pick, nonPick);
}

int main() {
	vector<int> arr{2,1,4,9};
  	int n = arr.size();
  	vector<int> dp(n,-1);
  	cout << solveUtil(n-1, arr, dp);
	return 0;
}

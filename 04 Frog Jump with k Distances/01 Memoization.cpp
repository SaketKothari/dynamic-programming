#include<bits/stdc++.h>
using namespace std;

int solveUtil(int ind, vector<int>& height, vector<int>& dp, int k) {
	if(ind==0) return 0;
	
	if(dp[ind]!=-1) return dp[ind];
	
	int mmSteps = INT_MAX;
	for(int j=1; j<=k; j++) {
		if(ind-j>=0) {
			int jump = solveUtil(ind-j, height, dp, k) + abs(height[ind]-height[ind-j]);
			mmSteps = min(jump,mmSteps);
		}
	}
	return dp[ind] = mmSteps;
}

int main() {
	vector<int> height{30,10,60,10,60,50};
	int k = 2;
	int n = height.size();
	vector<int> dp(n,-1);
	cout<<solveUtil(n-1,height,dp,k);
}

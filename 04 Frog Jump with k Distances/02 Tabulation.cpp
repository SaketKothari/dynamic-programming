#include<bits/stdc++.h>
using namespace std;

int solveUtil(int n, vector<int>& height, vector<int>& dp, int k) {
	dp[0] = 0;
	
	for(int i=1; i<n; i++) {
		int mmSteps = INT_MAX;
		for(int j=1; j<=k; j++) {
			if(i-j>=0) {
				int jump = dp[i-j] + abs(height[i]-height[i-j]);
				mmSteps = min(jump,mmSteps);
			}
		}
		dp[i] = mmSteps;
	}
	return dp[n-1];
}

int main() {
	vector<int> height{30,10,60,10,60,50};
	int k = 2;
	int n = height.size();
	vector<int> dp(n,-1);
	cout<<solveUtil(n,height,dp,k);
}

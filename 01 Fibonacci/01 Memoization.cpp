#include<bits/stdc++.h>
using namespace std;

int func(int n, vector<int> &dp) {
	if(n<=1) return n;
	
	if(dp[n] != -1) return dp[n];
	
	return dp[n] = func(n-1,dp) + func(n-2,dp);	
}

int main() {
	int n;
	cout<<"Enter the number:- ";
	cin>>n;
	vector<int> dp(n+1, -1);
	cout<<"Fibonacci of " <<n << " is = " << func(n, dp);
	return 0;
}

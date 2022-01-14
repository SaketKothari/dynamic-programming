#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"Enter the number:- ";
	cin>>n;
	
	int prev2 = 0;
	int prev = 1;
	
	for(int i=2; i<=n; i++) {
		int curr_i = prev + prev2;
		prev2 = prev;
		prev = curr_i;
	}
	cout<<"Fibonacci of " <<n << " is = " << prev;
}

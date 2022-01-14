#include<iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter n:- ";
	cin>>n;
	
	int prev2 = 1;
	int prev = 1;
	
	for(int i=2; i<=n; i++) {
		int curr_i = prev + prev2;
		prev2 = prev;
		prev = curr_i;
	}
	
	cout<<prev;
	return 0;
}

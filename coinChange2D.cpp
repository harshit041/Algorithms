/*
Coin-change using top down approach
author:Darsh M.
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int minCoin(int arr[], int n, int target) {
	int dp[n][target + 1];
	for (int i = 0; i < n; i++) {
		dp[i][0] = 0;
	}
	for (int i = 0; i <= target ; i++) {
		dp[0][i] = i;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= target; j++) {
			if (j < arr[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = min(dp[i - 1][j], dp[i][j - arr[i]] + 1);
			}
		}
	}
	return dp[n][target];
}
int main() {
	int n, t; cin >> n >> t;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << minCoin(arr, n, t) << endl;
	return 0;
}
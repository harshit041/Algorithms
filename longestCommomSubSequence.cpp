#include<bits/stdc++.h>
using namespace std;
int longest(int n, int m, string s1, string s2) {
	int dp[n + 1][m + 1];
	for (int i = 0; i <= n; i++) {
		dp[0][i] = 0;
		dp[i][0] = 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[n][m];
}
int main() {
	int n, m; cin >> n >> m;
	string st1, st2 ; cin >> st1 >> st2;
	cout << longest(n, m, st1, st2) << endl;
}
// 풀이 참고

#include <iostream>
#include <vector>
using namespace std;

typedef struct bag {
	int w; // weight
	int v; // value
};

int dp(int n, int k, vector<bag>& pack) {
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < pack[i].w; j++) {
			dp[i][j] = dp[i - 1][j];
		}
		for (int j = pack[i].w; j <= k; j++) {
			dp[i][j] = max(dp[i - 1][j - pack[i].w] + pack[i].v, dp[i - 1][j]);
		}
	}

	return dp[n][k];
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<bag> pack(n + 1, { 0, 0 });

	for (int i = 1; i <= n; i++) {
		cin >> pack[i].w >> pack[i].v;
	}

	cout << dp(n, k, pack) << '\n';
}

/* 풀이 참고 */

#include <iostream>
#include <vector>
using namespace std;

int chess(int row, int col, vector<vector<char>> &board) {
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && board[row + i][col + j] != 'B'){
				cnt++;
			}
			else if ((i + j) % 2 == 1 && board[row + i][col + j] != 'W') {
				cnt++;
			}

		}
	}

	if (cnt > 32) {
		return (64 - cnt);
	}

	return cnt;

}

int main(void) {

	int n, m;
	int ans = 65;

	cin >> n >> m;
	vector<vector<char>> board(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int cnt = chess(i, j, board);
			ans = min(ans, cnt);
		}
	}

	cout << ans;


	return 0;
}

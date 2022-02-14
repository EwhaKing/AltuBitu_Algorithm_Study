#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;

typedef pair<int, int> locate;

locate dir[4] = { {0, 1},
	{-1, 0}, {0, -1}, {1,0} };

int board[101][101];

int main(void) {

	int n;
	cin >> n;
	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int row; int col;
		cin >> row >> col;
		board[row - 1][col - 1] = 2; // 사과는 2
	}
	
	int l;
	cin >> l;
	map<int, char> command;

	for (int i = 0; i < l; i++) {
		int x; char c;
		cin >> x >> c;
		command[x] = c;
	}

	deque<locate> snake;
	snake.push_front(locate(0, 0));
	board[0][0] = 1;

	int t = 0;
	int h = 0;

	while (true) {
		t++;


		int snake_head = snake.front().first + dir[h].first;
		int snake_tail = snake.front().second + dir[h].second;

		if (snake_head < 0 || snake_tail >= n || snake_head >= n || snake_tail < 0 || board[snake_head][snake_tail] == 1) {
			break;
		}

		if (board[snake_head][snake_tail] != 2) {
			board[snake.back().first][snake.back().second] = 0;
			snake.pop_back();
		}

		snake.push_front(locate(snake_head, snake_tail));
		board[snake_head][snake_tail] = 1; // 지나감

		if (command[t] == 'L') //왼쪽 회전
			h = (h + 1) % 4;
		if (command[t] == 'D') //오른쪽 회전
			h = (h + 3) % 4;

	}

	cout << t;
	
	return 0;
}

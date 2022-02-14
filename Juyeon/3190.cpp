#include <iostream>
#include <vector>
#include <deque>
#include <map>
#include <algorithm>

using namespace std;
typedef pair<int, int> ci;

ci dir[4] = { {0,  1},  
             {-1, 0},  
             {0,  -1}, 
             {1,  0} }; 

int playGame(int n, vector<vector<int>>& board, map<int, char>& cmd) {

    deque<ci> snake;
    snake.push_front(ci(0, 0));
    board[0][0] = 1;

    int t = 0, head = 0; 
    while (true) {
        t++;
        int nr = snake.front().first + dir[head].first;
        int nc = snake.front().second + dir[head].second;

        if (nr < 0 || nr >= n || nc < 0 || nc >= n || board[nr][nc] == 1)
            break;

        if (board[nr][nc] != 2) { 
            board[snake.back().first][snake.back().second] = 0;
            snake.pop_back();
        }

        snake.push_front(ci(nr, nc));
        board[nr][nc] = 1;

        if (cmd[t] == 'L') 
            head = (head + 1) % 4;
        if (cmd[t] == 'D') 
            head = (head + 3) % 4;
    }
    return t;
}

int main() {
    int n, k, row, col, l, x;
    char c;

    cin >> n >> k;
    vector<vector<int>> board(n, vector<int>(n));
    for (int i = 0; i < k; i++) {
        cin >> row >> col;
        board[row - 1][col - 1] = 2; 
    }
    cin >> l;
    map<int, char> cmd;
    for (int i = 0; i < l; i++) { 
        cin >> x >> c;
        cmd[x] = c;
    }

    cout << playGame(n, board, cmd);
}
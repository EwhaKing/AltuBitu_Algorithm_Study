#include <iostream>
#include <vector>

using namespace std;
int max_space;
vector <int> queens_place(max_space);

void nQueen(int queen_count) {
    if (cnt == n) { //기저조건, n개의 퀸이 모두 놓임
        ans++; //정답 증가
        return;
    }
    for (int i = 0; i < n; i++) { //i: 열
        if (!check_col[i] && !check_left[cnt + i] && !check_right[cnt - i + n]) { //모두 false여야 배치 가능
            //(cnt, i)에 퀸 배치 -> 그에 따른 열, 좌하향 대각선, 우하향 대각선 체크해줌
            check_col[i] = true;
            check_left[cnt + i] = true;
            check_right[cnt - i + n] = true;
            backtracking(cnt + 1); //다음 행 호출
            //재탐색이 가능하도록 원래상태로 돌려놓음
            check_col[i] = false;
            check_left[cnt + i] = false;
            check_right[cnt - i + n] = false;
        }
    }
}

int main() {
    cin >> max_space;
    nQueen(0);
    cout << ans << '\n';
}

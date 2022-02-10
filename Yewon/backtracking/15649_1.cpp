//
// Created by 반예원 on 2022/02/10.
//

#include <iostream>
#include <vector>
const int SIZE = 8;

int n, m;
int num[SIZE]; //수열
bool check[SIZE + 1]; //수 사용 체크 배열

using namespace std;
void backtrackg(int cnt) { //cnt: 수열의 인덱스
    if (cnt == m) { //기저조건, 길이 m 수열 만든 경우
        for (int i = 0; i < cnt; i++) //바로 출력
            cout << num[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!check[i]) { //현재 수열에 해당 수가 없어야 사용 가능
            num[cnt] = i; //수열에 값 저장
            check[i] = true; //수 사용
            backtrackg(cnt + 1); //다음 수열 인덱스 호출
            check[i] = false; //원래 상태로 돌려놓음
        }

    }
}
int main(){

    cin >> n >> m;
    backtrackg(0);
}
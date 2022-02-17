// programmers level1 greedy 체육복
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    vector<int> student(n + 1, 1);

    for (int i = 0; i < lost.size(); i++) {
        student[lost[i]]--;
    }
    for (int i = 0; i < reserve.size(); i++) {
        student[reserve[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (student[i]) {
            continue;
        }
        else if (student[i - 1] == 2) {
            student[i - 1]--;
            student[i]++;
        }
        else if (student[i + 1] == 2) {
            student[i + 1]--;
            student[i]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (student[i]) {
            answer++;
        }
    }

    return answer;
}

int main(void) {

    int n;

    cin >> n;
    vector<int> lost;
    vector<int> reserve;

    /*
    for (int i = 0; i <= n; i++) {
        int input;
        cin >> input;
        lost.push_back(input);
    }
    for (int i = 0; i <= n; i++) {
        int input;
        cin >> input;
        reserve.push_back(input);
    }
    
    */

    cout << solution(n, lost, reserve);

}

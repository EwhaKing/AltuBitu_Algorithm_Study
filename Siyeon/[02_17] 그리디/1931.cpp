#include <iostream>
#include <vector>
#include <algorithm>

//풀다가 잘 안돼서 답지 참고함
using namespace std;
typedef pair<int, int> ci;

bool cmp(const ci &a, const ci &b) {
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first; 
}

int maxMeeting(int n, vector<ci> meeting) {
    int end = meeting[0].second; 
    int cnt = 1; 
    for (int i = 1; i < n; i++) {
        if (end <= meeting[i].first) { 
            cnt++;
            end = meeting[i].second; 
        }
    }

    return cnt;
}

int main() {
    int n;

    //입력
    cin >> n;
    vector<ci> meeting(n, ci(0, 0));
    for (int i = 0; i < n; i++)
        cin >> meeting[i].first >> meeting[i].second;

    //연산
    sort(meeting.begin(), meeting.end(), cmp);

    //연산 & 출력
    cout << maxMeeting(n, meeting);

    return 0;
}

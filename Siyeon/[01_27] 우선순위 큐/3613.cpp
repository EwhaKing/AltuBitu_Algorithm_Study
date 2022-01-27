#include <iostream>
#include <string>

using namespace std;
//이 문제는 java와 cpp을 동시에 만족하는 경우도 있으므로 굳이 for문 한번으로 해결하려고하지말고
//그냥 cpp인지 java인지 구분하는 함수하고
//cpp나 java로 바꿔주는 함수 따로따로 만들어서 꼬이지 않게 하는게 훨씬 중요.

bool isCpp(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[0] == '_' || s[s.size() - 1] == '_') return false; //맨앞이나 뒤가 _인거
        if (isupper(s[i])) return false;
        if (i != 0 && s[i] == '_') {                             //연속두번 _인거
            if (s[i - 1] == '_') return false;
        }
    }
    return true;
}

bool isJava(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[0])) return false;    //맨 처음이 대문자인거
        if (s[i] == '_') return false;  
    }
    return true;
}

string toCpp(string s) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            answer.push_back('_');
            answer.push_back(s[i] + 32);
        }
        else {
            answer.push_back(s[i]);
        }
    }
    return answer;
}

string toJava(string s) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '_') {
            continue;
        }
        else {
            if (i != 0 && s[i - 1] == '_') answer.push_back(s[i] - 32);
            else answer.push_back(s[i]);
        }
    }
    return answer;
}


int main() {
    bool isjava = false;
    bool iscpp = false;
    string input;
    string answer;

    cin >> input;

    iscpp = isCpp(input);
    isjava = isJava(input);

    if (iscpp && isjava) cout << input;
    else if (iscpp) cout << toJava(input);
    else if (isjava) cout << toCpp(input);
    else cout << "Error!";
}

//
// Created by banya on 2022-01-24.
//

#include <iostream>
#include <stack>
#include <map>

using namespace std;


map<char, char> bracket;

bool isBalanced(string input) {
    stack<char> s;

    for (int i = 0; i < input.size(); i++) {
        switch (input[i]) {
            case '(': case '[':
                s.push(input[i]);
                break;
            case ')': case ']':
                if (s.empty() || s.top() != bracket[input[i]])
                    return false;
                s.pop();
                break;
        }
    return s.empty();
}

int main() {
    string input;
    bracket[')'] = '(';
    bracket[']'] = '[';

    while (true) {
        //입력
        getline(cin, input); //띄어쓰기 포함 입력 받기
        if (input == ".")
            break;

        if (isBalanced(input))
            cout << "yes\n";
        else
            cout << "no\n";
        //삼항 연산자
        //cout << ((isBalanced(input)) ? "yes" : "no") << '\n';
    }
}
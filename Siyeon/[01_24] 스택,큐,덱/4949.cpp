#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    bool isFail;
    while(1) {
        stack<char> bracket;
        string input;
        getline(cin, input);
        
        if(input==".") {
            break;
        }
        isFail = false;
        
        for(int i = 0; i<input.size(); i++) {
            char c = input[i];
            if(c == '(' || c == '[') {
                bracket.push(c);
            }
            else if(c == ')') {
                if(bracket.empty() || bracket.top()!='(') {
                    isFail = true;
                    break;
                }
                bracket.pop();
            }
            else if(c == ']') {
                if(bracket.empty() || bracket.top()!='[') {
                    isFail = true;
                    break;
                }
                bracket.pop();
            }
        }
        if(isFail || !bracket.empty()) cout << "no\n";
        else cout << "yes\n";
    }
}

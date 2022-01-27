#include <iostream>
#include <string>

using namespace std;
int main() {
    bool isJava = false;
    bool isCpp = false;
    char c = '_';
    string input;
    string answer;

    cin >> input;
    for (int i = 0; i < input.size(); i++) {
        if (input[i] == '_') {
            if (isJava == false) isCpp = true;
            else {
                cout << "Error!";
                break;
            }
            
        }
        if (isupper(input[i])) {
            if (isCpp == false) isJava = true;
            else {
                cout << "Error!";
                break;
            }
        }

    }
    if (isJava == false && isCpp == true) {
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '_') {
                answer.push_back(input[i + 1] - 32);
            }
            else {
                answer.push_back(input[i]);
            }
        }
        cout << input;
    }
    else if (isJava == true && isCpp == false) {
        for (int i = 0; i < input.size(); i++) {
            if (isupper(input[i])) {
                answer.push_back('_');
                answer.push_back(input[i] + 32);
            }
            else {
                answer.push_back(input[i]);
            }
        }
        cout << input;
    }
    else cout << "Error!";


}

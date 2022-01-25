//
// Created by banya on 2022-01-26.
//

#include <iostream>

using namespace std;

bool isCpp(string str) {
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i]))
            return false;
        if (str[i] == '_' && (i == 0 || i == str.size() - 1 || str[i - 1] == '_'))
            return false;
    }
    return true;
}

bool isJava(string str) {
    return !isupper(str[0]) && str.find('_') == string::npos;
}

string toCpp(string str) {
    string result;
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i]))
            result += '_';
        result += tolower(str[i]);
    }
    return result;
}

string toJava(string str) {
    string result;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '_') {
            result += toupper(str[i + 1]);
            i++;
            continue;
        }
        result += str[i];
    }
    return result;
}


int main() {
    string str;

    cin >> str;
    bool is_cpp = isCpp(str);
    bool is_java = isJava(str);

    if (is_cpp && is_java)
        cout << str;
    else if (is_cpp)
        cout << toJava(str);
    else if (is_java)
        cout << toCpp(str);
    else
        cout << "Error!";
}
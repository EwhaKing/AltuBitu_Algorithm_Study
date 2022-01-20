/*
* 220117
* ¿Ã¡÷ø¨
*/


#include <iostream>
#include <vector>

using namespace std;

bool isGroup(string str) {
    char cur = '.'; 
    vector<bool> alphabet(26, false); 

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == cur) 
            continue;
        if (alphabet[str[i] - 'a']) 
            return false;
        cur = str[i];
        alphabet[str[i] - 'a'] = true; 
    }
    return true;
}

int main() {
    int n, result = 0;

    cin >> n;
    while (n--) {
        string word;
        cin >> word;

        if (isGroup(word)) 
            result++;
    }

    cout << result;
}

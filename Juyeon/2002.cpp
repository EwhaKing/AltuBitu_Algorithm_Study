/*
* 220120
* ¿Ã¡÷ø¨
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    string input;
    map<string, int> m;

    cin >> n;
    for (int i = 0; i < n; i++) { 
        cin >> input;
        m[input] = i;
    }

    vector<int> seq;
    for (int i = 0; i < n; i++) {
        cin >> input;
        seq.push_back(m[input]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (seq[i] > seq[j]) { 
                ans++;
                break;
            }
        }
    }
    cout << ans;
}
#include <iostream>
#include <map>

using namespace std;

int main() {
    //개킹받게 이거 안적으면 시간초과남^^
    cin.tie(0);
    ios::sync_with_stdio(0);

    int pokCnt, num, i;
    string pokName;
    map<string, int> pokDexName;
    map<int, string> pokDexNum;

    cin >> pokCnt >> num;

    for (i = 1; i <= pokCnt; i++) {
        cin >> pokName;
        pokDexName[pokName] = i;
        pokDexNum[i] = pokName;
    }

    for (i = 0; i < num; i++) {
        cin >> pokName;
        if (isdigit(pokName[0])) {
            cout << pokDexNum[stoi(pokName)] << "\n";
        }
        else {
            cout << pokDexName[pokName] << "\n";
        }
    }
}
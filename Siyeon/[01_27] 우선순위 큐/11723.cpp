#include <iostream>
#include <vector>
#include <string>

using namespace std;

//0,1만 쓸거면 bool을 쓰자 사이즈가 더 작아서 성능이 올라간다.
int main() {
    ios::sync_with_stdio(false); //이거 빼먹지 말자.
    cin.tie(NULL);
    
    int num, i;
    int x; 
    string command;
    vector<bool> v(21, false);
    cin >> num;
    
    for(i=0; i<num; i++) {
        //all하고 empty는 숫자가 옆에 안붙어있으니까 x받으면안됨.
        cin >> command;
        if (command == "all") {
            v.assign(21, true);
            continue;
        }
        else if (command == "empty"){
            v.assign(21, false);
            continue;
        }
        //all empty 먼저 확인하고, 아니면 x까지 받는거!!
        cin >> x;
        if(command == "add") {
            if(v[x] == false) v[x] = true;
        }
        else if (command == "remove") {
            if(v[x] == true) v[x] = false;
        }
        else if (command == "check") {
            cout << v[x] << "\n";
        }
        else if (command == "toggle") {
            if(v[x] == true) v[x] = false;
            else v[x] = true;
        }
    }
}

#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(void) {
    int num, i, pushNum, result;
    string input;
    queue<int> q;
    cin >> num;
    
    
    for(i=0; i<num; i++) {
        cin >> input;
        
        if(input == "push"){
            cin >> pushNum;
            q.push(pushNum);
        }
        else if(input == "pop"){
            if(!q.empty()){
                result = q.front();
                q.pop();
            }else result = -1;
            cout << result << endl;
        }
        else if(input == "size"){
            cout << q.size() << endl;
        }
        else if(input == "front"){
            if(!q.empty()) result =q.front();
            else result =-1;
            cout << result << endl;
        }
        else if(input == "back"){
            if(!q.empty()) result = q.back();
            else result = -1;
            cout << result << endl;
        }
        else if(input == "empty"){
            if(!q.empty()) result = 0;
            else result = 1;
            cout << result << endl;
        }
    }
    return 0;
    
}

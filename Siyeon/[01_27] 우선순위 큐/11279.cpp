#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num, i, x;
    priority_queue<int> pq;
    
    cin >> num;
    for(i=0; i<num; i++) {
        cin >> x;
        if(x == 0) {
            if(!pq.empty()) {
                cout << pq.top() << "\n";
                pq.pop();
            }else {
                cout << 0 << "\n";
            }
        }
        else if( x > 0 ){
            pq.push(x);
        }
    }
}

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int qsize, num, i;
    cin >> qsize;
    priority_queue< int, vector<int>, greater<int> > pq;

    for (i = 0; i < qsize * qsize; i++) {
        cin >> num;
        if (pq.size() == qsize) {
            if(pq.top() < num) {
                pq.pop();
                pq.push(num);
            }
        }
        else if (pq.size() < qsize) {
            pq.push(num);
        }
    }
    cout << pq.top();
}

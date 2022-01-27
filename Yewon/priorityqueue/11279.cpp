//
// Created by banya on 2022-01-25.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> heap_vec;

//empty
bool empty() {
    return heap_vec.size() == 1;
}

//push
void push(int num) {
    int idx = heap_vec.size();
    heap_vec.push_back(num);

    while (idx != 1 && heap_vec[idx] > heap_vec[idx / 2]) {
        swap(heap_vec[idx], heap_vec[idx / 2]);
        idx /= 2;
    }
}

//pop
int pop() {
    int item = heap_vec[1];
    swap(heap_vec[1], heap_vec[heap_vec.size() - 1]);
    heap_vec.pop_back();

    int parent = 1, child = 2;
    while (child < heap_vec.size()) {

        if (child + 1 < heap_vec.size() && heap_vec[child] < heap_vec[child + 1])
            child++;
        if (heap_vec[parent] >= heap_vec[child])
            break;
        swap(heap_vec[parent], heap_vec[child]);
        parent = child;
        child = parent * 2;
    }
    return item;
}

int main() {
    //입출력 속도 향상
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    priority_queue<int> pq;
    heap_vec.push_back(0);

    cin >> n;
    while (n--) {
        cin >> x;
        if (x == 0) {
            if (pq.empty())
                cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        } else
            pq.push(x);
    }
}
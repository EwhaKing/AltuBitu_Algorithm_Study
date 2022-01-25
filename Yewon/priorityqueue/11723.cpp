//
// Created by banya on 2022-01-25.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> pq;
    int a;
    string st;
    int num;
    cin >> a;
    for(int i=0;i<a;i++){
    cin >> st;
    if(st=="add")
    {cin >> num;
    pq.push_back(num);

    }
    if(st=="check")
    {cin >> num;
        auto it = find(pq.begin(), pq.end(), num);
        if (it == pq.end()) {
            cout << 0;
        }
        else {
            cout <<  1;
        }
    }

        if(st=="toggle")
        {cin >> num;
            auto it = find(pq.begin(), pq.end(), num);
            if (it == pq.end()) {
                pq.push_back(num);
            }
            else {
                pq.erase(remove(pq.begin(), pq.end(), num), pq.end());
            }
        }

        if(st=="remove")
        {cin >> num;
            auto it = find(pq.begin(), pq.end(), num);
            if (it != pq.end()) {
                pq.erase(remove(pq.begin(), pq.end(), num), pq.end());
            }

        }

        if(st=="all")
        {
            pq={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

        }
        if(st=="empty")
        {
            pq={};
        }

    }
}
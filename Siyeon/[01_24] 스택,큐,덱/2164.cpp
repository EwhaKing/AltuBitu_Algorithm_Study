#include <iostream>
#include <deque>

using namespace std;

int main() {
    int cardNum, i, shiftNum;
    deque<int> cards;
    
    cin >> cardNum;
    for(i=1; i<=cardNum; i++) {
        cards.push_back(i);
    }
    
    while(cards.size()>1) {
        cards.pop_front();
        if(cards.size()==1) break;
        else {
            shiftNum = cards.front();
            cards.push_back(shiftNum);
            cards.pop_front();
        }
    }
    cout << cards.front();
}

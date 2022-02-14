#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void moveCard(deque<int>& deck, deque<int>& ground) {
    while (!ground.empty()) {
        deck.push_back(ground.back());
        ground.pop_back();
    }
}

pair<int, int> playGame(int m, vector<deque<int>>& deck, vector<deque<int>>& ground) {
    bool turn = false; 

    while (m--) {
        int card = deck[turn].front();
        ground[turn].push_front(card);
        deck[turn].pop_front();

        if (deck[turn].empty())
            break;

        int bell = -1;
        if (card == 5)
            bell = 0;
        else if (!ground[0].empty() && !ground[1].empty() && (card + ground[!turn].front() == 5))
            bell = 1;

        if (bell != -1) { 
            moveCard(deck[bell], ground[!bell]);
            moveCard(deck[bell], ground[bell]);
        }
        turn = !turn; 
    }
    return make_pair(deck[0].size(), deck[1].size());
}

int main() {
    int n, m, num1, num2;
    vector<deque<int>> deck(2), ground(2);

    cin >> n >> m;
    while (n--) {
        cin >> num1 >> num2;
        deck[0].push_front(num1);
        deck[1].push_front(num2);
    }

    pair<int, int> result = playGame(m, deck, ground);

    if (result.first == result.second)
        cout << "dosu\n";
    else if (result.first > result.second)
        cout << "do\n";
    else if (result.first < result.second)
        cout << "su\n";
}
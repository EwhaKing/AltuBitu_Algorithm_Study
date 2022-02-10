#include <iostream>
#include <vector>

using namespace std;

vector <int> sequence(9);
int maxPick;

void getSequence(int min, int max, int pick) {
    int currIndex = maxPick - pick + 1;

        for (int i = min; i <= max - pick + 1; i++) {
            sequence[currIndex] = i;
            if (pick > 1) getSequence(i + 1, max, pick - 1);
            else {
                for (int i = 1; i <= maxPick; i++) {
                    cout << sequence[i] << " ";
                }
                cout << "\n";
            }

        }
}

int main() {
    int i, max;
    cin >> max >> maxPick;
    getSequence(1, max, maxPick);

}

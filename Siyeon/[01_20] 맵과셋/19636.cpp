#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int weight, dietDate, digest, diff;
    int befWeight, befEat, befDigest;
    int dietEat, dietMove, use;
    bool dead = false;

    cin >> befWeight >> befEat >> diff;
    cin >> dietDate >> dietEat >> dietMove;
    digest = befEat;
    befDigest = befEat;
    weight = befWeight;
    use = befDigest + dietMove;

    befWeight += (dietEat - use)*dietDate;
    if (befWeight <= 0 || befDigest <= 0) cout << "Danger Diet" << "\n";
    else cout << befWeight << " " << befDigest << "\n";

    for (int i = 0; i < dietDate; i++) {
        use = digest + dietMove;
        weight += (dietEat - use);
        if (abs(dietEat - use) > diff) {
            digest += floor((double) (dietEat - use) / 2);
        }
        if (weight <= 0 || digest <= 0) dead = true;
    }
    if(dead) {
        cout << "Danger Diet" << "\n";
    }
    else {
        cout << weight << " " << digest << " ";
        if ((befDigest - digest) > 0) cout << "YOYO" << "\n";
        else cout << "NO" << "\n";
    }
}

/*
* 220120
* ¿Ã¡÷ø¨
*/

#include <iostream>
#include <cmath>

using namespace std;

typedef pair<int, int> ci;

ci diet(int D, int W, int I, int A, int B, int T) {
    while (D--) {
        int E = B + A; 
        W += (I - E);

        if (abs(I - E) > T) 
            B += floor((double)(I - E) / 2); 

        if (W <= 0 || B <= 0) return ci(0, 0); 
    }
    return ci(W, B);
}

int main() {
    int W0, I0, T, D, I, A;

    cin >> W0 >> I0 >> T;
    cin >> D >> I >> A;

    int W = W0 + (I - (I0 + A)) * D; 
    if (W <= 0)
        cout << "Danger Diet\n";
    else
        cout << W << ' ' << I0 << '\n';

    ci result = diet(D, W0, I, A, I0, T);
    if (!result.first || !result.second) 
        cout << "Danger Diet\n";
    else {
        string ans = "NO";
        if (I0 - result.second > 0)
            ans = "YOYO";
        cout << result.first << ' ' << result.second << ' ' << ans << '\n';
    }

    return 0;
}
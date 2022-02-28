#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); //속도 빠르게
    cin.tie(NULL);

    int n, m, num;
    cin >> n >> m;
  
    vector<int> add(n + 1, 0);
    for (int i = 1; i <= n; i++) { 
        cin >> num;
        add[i] = add[i - 1] + num; 
    }

    while (m--) {
        int s, e;
        cin >> s >> e;
        cout << add[e] - add[s - 1] << '\n';
    }
}

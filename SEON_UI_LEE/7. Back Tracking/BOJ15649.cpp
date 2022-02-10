#include <iostream>
#include <vector>
using namespace std;


int n, m;
vector<int> num(9);
vector<bool> check(9);

void back_tracking(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << num[i] << ' ';
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			check[i] = true;
			num[cnt] = i;
			back_tracking(cnt + 1);
			check[i] = false;
		}
	}
}


int main(void) {

	cin >> n >> m;

	back_tracking(0);

	return 0;
}

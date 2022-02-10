#include <iostream>
#include <vector>
using namespace std;

int n;
int ans = 0;
vector<bool> col(15);
vector<bool> leftCheck(30);
vector<bool> rightCheck(30);

void back_tracking(int i) {
	if (i == n) {
		ans++;
		return;
	}

	for (int j = 0; j < n; j++) {
		if (!col[j] && !leftCheck[i + j] && !rightCheck[i-j + n]) {
			col[j] = true;
			leftCheck[i + j] = true;
			rightCheck[i - j + n] = true;
			back_tracking(i + 1);
			col[j] = false;
			leftCheck[i + j] = false;
			rightCheck[i - j + n] = false;

		}
	}

}

int main(void) {

	cin >> n;
	back_tracking(0);

	cout << ans << '\n';

	return 0;
}

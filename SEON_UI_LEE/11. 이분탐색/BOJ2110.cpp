#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> house;

int router(int d) {
	int cnt = 1;
	int pos = house[0];

	for (int i = 1; i < house.size(); i++) {
		if (house[i] - pos < d) {
			continue;
		}
		cnt++;
		pos = house[i];
	}
	return cnt;
}

int upperS(int left, int right, int target) {
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		int i = router(mid);

		if (i < target) {
			right = mid - 1;
		}
		else if (i >= target) {
			ans = mid;
			left = mid + 1;
		}
	}
	return ans;
}

int main(void) {

	int n, c;
	cin >> n >> c;
	house.assign(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> house[i];
	}
	sort(house.begin(), house.end());

	cout << upperS(1, house[n - 1] - house[0], c);

	return 0;
}

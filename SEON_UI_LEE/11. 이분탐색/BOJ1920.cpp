#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int m;
	cin >> m;

	while (m--) {
		int input;
		cin >> input;

		int left = 0;
		int right = n - 1;

		for (int i = 0; i < n; i++) {
			int mid = (left + right) / 2;
			if (v[mid] == input) {
				cout << "1" << " ";
				break;
			}
			else if (mid > input) {
				right = mid - 1;
			}
			if (v[mid] <= target) {
				left = mid + 1;
			}
		}

	}

	return 0;
}

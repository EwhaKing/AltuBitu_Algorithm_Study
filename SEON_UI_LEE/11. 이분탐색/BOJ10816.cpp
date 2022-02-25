#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n, m;
vector<int> v;


int lower(int left, int right, int target) {
	while (left <= right) {
		int mid = (left + right) / 2;
		if (v[mid] >= target) {
			right = mid - 1;
		}
		if (v[mid] < target) {
			left = mid + 1;
		}
	}
	return right + 1;
}

int upper(int left, int right, int target) {
	while (left <= right) {
		int mid = (left + right) / 2;
		if (v[mid] > target) {
			right = mid - 1;
		}
		if (v[mid] <= target) {
			left = mid + 1;
		}
	}
	return right + 1;
}

int main(void) {

	cin >> n;
	v.assign(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	cin >> m;
	vector<int> v3(m, 0);

	sort(v.begin(), v.end());

	for(int i = 0; i< m; i++) {
		int input;
		cin >> input;
		v3[i] = upper(0, n - 1, input) - lower(0, n - 1, input);
	}

	for (int i = 0; i < m; i++) {
		cout << v3[i] << " ";
	}

	return 0;
}

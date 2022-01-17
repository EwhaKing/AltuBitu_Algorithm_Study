#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	int b, c;

	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> b >> c;

	long long cnt = 0;

	for (int i = 0; i < n; i++) {
		a[i] -= b;
		cnt++;

		if (a[i] <= 0) {
			continue;
		}

			cnt += (a[i] / c);
			if (a[i] % c != 0) {
				cnt++;
			}

	}


	cout << cnt;

	return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int pn(int n, int k) {
	vector<bool> is_prime_number(n + 1, true);

	int cnt = 0;

	for (int i = 2; i <= n; i++) {
		if (is_prime_number[i]) {
			for (int j = i; j <= n; j += i) {
				if (!is_prime_number[j]) {
					continue;
				}
				
				is_prime_number[j] = false;

				if (++cnt == k) {
					return j;
				}
			}
		}
	}

	return -1;
}


int main(void) {

	int n, k;

	cin >> n >> k;

	cout << pn(n, k) << "\n";
	

	return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime() {
	vector<int> prime(5000001, 1);

	for (int i = 0; i < 5000000; i++) {
		prime[i] = i;
	}

	for (int i = 2; i <= sqrt(5000000); i++) {
		if (prime[i] == i) {
			for (int j = i * i; j <= 5000000; j += i) {
				if (prime[j] == j) {
					prime[j] = i;
				}
			}
		}
	}
	
	return prime;
}

int main(void) {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	vector<int> k(n);
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}

	vector<int> prime_number = prime();


	for (int i = 0; i < n; i++) {
		while (k[i] > 1) {
			cout << prime_number[k[i]] << " ";
			k[i] /= prime_number[k[i]];
		}
		cout << "\n";
	}

	return 0;
}

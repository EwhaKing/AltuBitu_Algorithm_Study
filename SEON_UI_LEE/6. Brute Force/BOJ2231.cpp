#include <iostream>
using namespace std;


int seperate_sum(int n) {

	for (int i = 1; i <= n; i++) {
		int j = i;
		int sum = i;
		while (j > 0) {
			sum += j % 10;
			j /= 10;
		}
		if (sum == n) {
			return i;
		}
	}

	return 0;

}

int main(void) {

	int n;
	cin >> n;

	int sum = seperate_sum(n);

	cout << sum;

	return 0;
}

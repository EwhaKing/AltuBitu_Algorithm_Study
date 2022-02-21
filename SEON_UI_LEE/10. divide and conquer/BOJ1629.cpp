#include <iostream>
using namespace std;

long long divide(int a, int b, int c) {
	if (b == 1) {
		return a % c;
	}

	if (b % 2 == 0) {
		long long second = divide(a, b / 2, c);
		return (second * second) % c;
	}

	return (a * divide(a, b - 1, c)) % c;
}

int main(void) {
	int a, b, c;

	cin >> a >> b >> c;

	cout << divide(a, b, c);

	return 0;
}

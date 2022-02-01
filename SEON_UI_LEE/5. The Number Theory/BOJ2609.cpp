#include <iostream>
using namespace std;

int main(void) {

	int a, b;
	cin >> a >> b;

	int l = a * b;

	while (b) {
		int t = a % b;
		a = b;
		b = t;
	}

	l /= a;

	cout << a << "\n" << l;

	return 0;
}

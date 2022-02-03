#include <iostream>
using namespace std;

int main(void) {

	int n, m;
	char c;
	cin >> n >> c >> m;
	
	int a = n;
	int b = m;

	while (b) {
		int t = a % b;
		a = b;
		b = t;
	}


	n /= a;
	m /= a;

	cout << n << ":" << m;

	return 0;
}

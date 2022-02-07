#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int movie_director(int n) {
	vector<int> md;
	while (n > 0) {
		md.push_back(n % 10);
		n /= 10;
	}

	for (int i = 2; i < md.size(); i++) {
		if (md[i - 2] == 6 && md[i - 1] == 6 && md[i] == 6) {
			return 1;
		}
	}

	return 0;
}

int main(void) {

	int n;
	cin >> n;

	for (int i = 666; v.size() < n; i++) {
		if (movie_director(i) == 1) {
			v.push_back(i);
		}
	}


	cout << v.back();

	return 0;
}

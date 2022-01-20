#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {

	int n;
	string input;
	map<string, int> car;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		car[input] = i;
	}

	vector<int> out(n);
	for (int i = 0; i < n; i++) {
		cin >> input;
		out[i] = car[input];
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (out[i] > out[j]) {
				cnt++;
				break;
			}
		}
	}

	cout << cnt;

	return 0;
}
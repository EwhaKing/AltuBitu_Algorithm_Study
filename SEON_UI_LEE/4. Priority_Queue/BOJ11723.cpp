#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	int s[21] = { 0 };


	string input;
	int x;
	while (n--) {
		cin >> input;
		if (input == "add") {
			cin >> x;
			if (!s[x]) {
				s[x] = 1;
			}
			else {
				break;
			}
		}
		if (input == "remove") {
			cin >> x;
			if (s[x] == 1) {
				s[x] = 0;
			}
			else if (s[x] == 0) {
				continue;
			}
			else {
				break;
			}
		}
		if (input == "check") {
			cin >> x;
			if (s[x]) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		if (input == "toggle") {
			cin >> x;
			if (s[x]) {
				s[x] = 0;
			}
			else {
				s[x] = 1;
			}
		}
		if (input == "all") {
			for (int i = 0; i < 21; i++) {
				s[i] = 1;
			}
		}
		if (input == "empty") {
			memset(s, 0, sizeof(s));
		}
	}

	return 0;
}

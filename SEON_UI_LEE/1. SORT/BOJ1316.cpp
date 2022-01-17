#include <iostream>
#include <string>
using namespace std;


int main(void) {

	int cnt = 0;
	int n;
	cin >> n;
	char word[100] = "";

	for (int i = 0; i < n; i++) {
		cin >> word;
		int point = 1;

		int alpha[26] = { 0 };

		int j = 0;
		while (1) {
			if (word[j] == '\0') {
				break;
			}
			if (alpha[word[j] - 97] == 1) {
				if (word[j - 1] != word[j]) {
					point = 0;
					break;
				}
			}
			else {
				alpha[word[j] - 97] = 1;
			}
			j++;
		}

		if (point == 1) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
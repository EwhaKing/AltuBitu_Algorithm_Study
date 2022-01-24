#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	stack<int> s;

	string input;

	for (int i = 0; i < n; i++) {
		int data;
		cin >> input;

		if (input == "push") {
			cin >> data;
			s.push(data);
		}
		else if (input == "top") {
			if (!s.empty()) {
				cout << s.top() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (input == "size") {
			cout << s.size() << endl;
		}
		else if (input == "empty") {
			cout << s.empty() << endl;
		}		
		else if (input == "pop") {
			if (!s.empty()) {
				cout << s.top() << endl;
				s.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}
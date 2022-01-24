#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void) {

	int n;
	cin >> n;
	queue<int> q;
	
	string input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			int data;
			cin >> data;
			q.push(data);
		}
		else if (input == "pop") {
			if (!q.empty()) {
				cout << q.front() << endl;
				q.pop();
			}
			else {
				cout << "-1" << endl;
			}
		}
		else if (input == "size") {
			cout << q.size() << endl;
		}
		else if (input == "empty") {
			cout << q.empty() << endl;
		}
		else if (input == "front") {
			if (!q.empty()) {
				cout << q.front() << endl;
			}
			else{
				cout << "-1" << endl;
			}
		}
		else if (input == "back") {
			if (!q.empty()) {
				cout << q.back() << endl;
			}
			else {
				cout << "-1" << endl;
			}
		}
	}

	return 0;
}
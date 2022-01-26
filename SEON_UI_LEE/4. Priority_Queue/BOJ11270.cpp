#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int> q;

	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (q.empty()) {
				cout << "0\n";
			}
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}

	return 0;
}

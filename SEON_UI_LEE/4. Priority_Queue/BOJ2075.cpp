#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> pq;


	int x;
	for (int i = 0; i < n * n; i++) {

		cin >> x;
		if (pq.size() < n) {
			pq.push(x);
		}
		else if (pq.top() < x) {
			pq.pop();
			pq.push(x);
		}
	}

	

	cout << pq.top();

	return 0;
}

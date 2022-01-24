#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (n != 1) {
		q.pop();
		q.push(q.front());
		q.pop();
		n--;
	}


	cout << q.front();

	return 0;
}
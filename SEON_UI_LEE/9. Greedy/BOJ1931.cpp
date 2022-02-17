#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int first;
	int second;
}info;

bool compare(info& a, info& b) {
	if (a.second < b.second) {
		return true;
	}
	else if (a.second == b.second) {
		return (a.first < b.first);
	}
	else {
		return false;
	}
}

int main(void) {
	int n, begin, end;

	cin >> n;

	vector<info> timeline(n);



	for(int i = 0; i< n; i++) {
		cin >> begin >> end;
		timeline[i].first = begin;
		timeline[i].second = end;
	}

	sort(timeline.begin(), timeline.end(), compare);

	int cnt = 1;
	int tmp = timeline[0].second;
	for (int i = 1; i < n; i++) {
		if (tmp <= timeline[i].first) {
			cnt++;
			tmp = timeline[i].second;
		}
	}

	cout << cnt;

}

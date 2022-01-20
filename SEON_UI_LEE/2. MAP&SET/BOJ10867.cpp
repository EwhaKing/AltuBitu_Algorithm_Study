#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(void) {

	int n;
	cin >> n;

	vector<int> arr(n);
	set<int> out;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < arr.size(); i++) {
		out.insert(arr[i]);
	}

	set<int>::iterator iter;
	for (iter = out.begin(); iter != out.end(); iter++) {
		cout << *iter << ' ';
	}

	return 0;
}
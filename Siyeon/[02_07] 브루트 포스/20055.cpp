#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int N, K;
int zerocount;
int p = 0;
int barr[201];
bool robo[101];

void ratate() {
	barr[0] = barr[2 * N];
	for (int i = 2 * N; i >= 2; i--) {
		barr[i] = barr[i - 1];
	}
	for (int i = N - 1; i >= 1; i--) {
		robo[i + 1] = robo[i];
	}
	robo[1] = false;
	barr[1] = barr[0];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> K;
	for (int i = 1; i <= 2*N; i++) {
		cin >> barr[i];
		if (barr[i] == 0) zerocount++;
	}
	while (1) {
		if (zerocount >= K) break;
		p++;
		ratate();
		if (robo[N] == true) {
			robo[N]= false;
		}
		for (int i = N - 1;  i >= 1; i--) {
			if (robo[i] == true) {
				if (robo[i + 1] == false && barr[i + 1] >= 1) {
					robo[i] = false; robo[i + 1] = true;
					barr[i + 1]--;
					if (barr[i + 1] == 0) zerocount++;
				}
			}
		}
		if (robo[1] == false && barr[1] >= 1) {
			robo[1] = true; barr[1]--;
			if (barr[1] == 0) zerocount++;
		}
	}
	cout << p << "\n";
	return 0;
}

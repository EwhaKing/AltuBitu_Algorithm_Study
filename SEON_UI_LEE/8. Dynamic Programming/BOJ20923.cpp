#include <iostream>
#include <vector>
#include <deque>

using namespace std;


int main(void) {

	int n, m;
	cin >> n >> m;

	deque<int> do_card;
	deque<int> su_card;
	

	while (n--) {
		int d, s;
		cin >> d >> s;
		do_card.push_front(d);
		su_card.push_front(s);

	}

	deque<int> do_gc;
	deque<int> su_gc;

	int do_ground = 0;
	int su_ground = 0;

	bool turn = false;

	while (m--) {

		if (!turn) {
			do_ground = do_card.front();
			do_gc.push_front(do_ground);
			do_card.pop_front();
		}

		cout << do_card.size() << " " << su_card.size() << endl;

		if (do_card.size() == 0) {
			break;
		}

		if (turn) {
			su_ground = su_card.front();
			su_gc.push_front(su_ground);
			su_card.pop_front();
		}

		if (su_card.size() == 0) {
			break;
		}

		if (su_ground == 5 || do_ground == 5) {
			int j = su_gc.size();
			for (int i = 0; i < j; i++) {
				do_card.push_back(su_gc.back());
				su_gc.pop_back();
			}
			su_ground = 0;
		}
		else if (!su_gc.empty() && !do_gc.empty() && (su_ground + do_ground) == 5) {
			int j = do_gc.size();
			for (int i = 0; i < j; i++) {
				su_card.push_back(do_gc.back());
				do_gc.pop_back();
			}
			do_ground = 0;
		}


		turn = !turn;

		cout << do_card.size() << " " << su_card.size() << endl;
	}


	if (do_card.size() > su_card.size()) {
		cout << do_card.size() << " " << su_card.size() << endl;
		cout << "do";
	}
	else if (do_card.size() == su_card.size()) {
		cout << do_card.size() << " " << su_card.size() << endl;
		cout << "dosu";
	}
	else {
		cout << do_card.size() << " " << su_card.size() << endl;
		cout << "su";
	}

	return 0;
}

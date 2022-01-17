#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct {
	string name;
	int kor;
	int eng;
	int math;
}student;

bool compare(student a, student b) {
	if (a.kor == b.kor) { // 두 명 국어 점 수 같을 때
		if (a.eng == b.eng) { // 두 명 영어 점수 같을 때
			if (a.math == b.math) {
				return a.name < b.name; // 수학 점수 비교해서도 같을 때 이름 사전순
			}
			else { 
				return a.math > b.math; // 국어, 영어 같을 때 수학 점수 큰지 반환
			}
		}
		else {
			return a.eng < b.eng; // 국어 점수 같을 때 영어 점수 비교
		}
	}
	else {
		return a.kor > b.kor; // 국어 점수로만 비교
	}
}

int main(void) {


	int n;
	cin >> n;

	vector<student> students(n);

	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;
	}

	sort(students.begin(), students.end(), compare);

	for (int i = 0; i < n; i++)
	{
		cout << students[i].name << "\n";
	}

	return 0;
}
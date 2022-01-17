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
	if (a.kor == b.kor) { // �� �� ���� �� �� ���� ��
		if (a.eng == b.eng) { // �� �� ���� ���� ���� ��
			if (a.math == b.math) {
				return a.name < b.name; // ���� ���� ���ؼ��� ���� �� �̸� ������
			}
			else { 
				return a.math > b.math; // ����, ���� ���� �� ���� ���� ū�� ��ȯ
			}
		}
		else {
			return a.eng < b.eng; // ���� ���� ���� �� ���� ���� ��
		}
	}
	else {
		return a.kor > b.kor; // ���� �����θ� ��
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
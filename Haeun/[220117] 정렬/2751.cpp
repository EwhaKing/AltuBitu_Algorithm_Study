#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int numOfNum = 0;
	scanf_s("%d", &numOfNum);

	vector<int> list(numOfNum);

	for (int i = 0; i < numOfNum; i++)
		scanf_s("%d", &list[i]);

	//�������� ����
	sort(list.begin(), list.end());

	for (int i = 0; i < numOfNum; i++)
		printf("%d\n", list[i]);

}
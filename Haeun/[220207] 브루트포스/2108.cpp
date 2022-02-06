#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mean(vector<int>& target)
{
	double sum = 0;
	for (int i = 0; i < target.size(); i++)
		sum += target[i];

	printf("%.0lf\n", sum / target.size());
}
void median(vector<int>& target)
{
	printf("%d\n", target[target.size() / 2 ]);
}
void mode(vector<int>& target)
{
	int max = 0;
	int maxIdx = 0;
	int check = 0;//최빈값이 여러개 일 때 두번째로 작은 값을 찾기 위한 변수
	int secondaryIdx = 0;
	for (int i = 0; i < target.size();i++)
	{
		int tmp = 1;
		while (i + 1 < target.size() && target[i] == target[i + 1])
		{
			tmp++;
			i++;
		
		}
		if (max == tmp && check != 1)
		{
			check = 1;
			secondaryIdx = i;
		}
		if (max < tmp)
		{
			max = tmp;
			maxIdx= i;
			check = 0;
		}
	}

	if (check == 1)
		printf("%d\n", target[secondaryIdx]);
	else
		printf("%d\n", target[maxIdx]);
}
void range(vector<int>& target)
{
	printf("%d\n", target.back()- target.front());
}

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	vector<int> list(n);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	sort(list.begin(), list.end());//오름차순 정렬

	mean(list);
	median(list);
	mode(list);
	range(list);
}
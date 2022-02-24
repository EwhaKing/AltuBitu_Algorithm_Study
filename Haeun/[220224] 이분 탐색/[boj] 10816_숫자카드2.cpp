#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	
	vector<int> list(n);
	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	sort(list.begin(), list.end());//오름차순 정렬

	int m = 0;
	scanf_s("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int find_value = 0;
		scanf_s("%d", &find_value);

		int result = upper_bound(list.begin(), list.end(), find_value) - lower_bound(list.begin(), list.end(), find_value);
		printf("%d ", result);
	}

	
}
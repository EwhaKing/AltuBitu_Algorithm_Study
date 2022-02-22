#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& v, int find_value)
{
	int begin = 0;
	int end = v.size()-1;

	while (begin <= end && begin >= 0 && end < v.size())
	{
		int mid = (begin + end) / 2;
		if (find_value == v[mid])
			return mid;

		else if (find_value < v[mid])
			end = mid - 1;
		else //find_value > v[mid]
			begin = mid + 1;
	}
	return -1;
}
int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	vector<int> list(n);


	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	sort(list.begin(), list.end());
	int m = 0;
	scanf_s("%d", &m);

	for (int i = 0; i < m; i++)
	{
		int find_value = 0;
		scanf_s("%d", &find_value);
		int result = binarySearch(list, find_value);
		if (result == -1)
			printf("0\n");
		else printf("1\n");

	}
}
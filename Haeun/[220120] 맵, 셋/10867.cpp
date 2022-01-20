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

	sort(list.begin(), list.end());

	for (int i = 0; i < n; i++)
	{
		printf("%d ", list[i]);
		while (i < n - 1 && list[i] == list[i + 1])
		{
			i++;
		}
	}
}
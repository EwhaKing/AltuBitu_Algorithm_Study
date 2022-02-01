#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int n = 0, k = 0;
	scanf_s("%d %d", &n, &k);

	vector<int> list(n+1);

	for (int i = 2; i <= n; i++)
		list[i] = i;

	int p = 2;
	int i = 0;
	int result = 0;
	while (1)
	{
		int target = p;
		int j = 2;
		while (i < k && target <= n)
		{
			if (list[target] != 0)//아직 지워지지 않았다면
			{
				list[target] = 0;
				i++;
			}
			if (i == k)
			{
				result = target;
				break;
			}
			
			target = p * j++;
			
		}
		p++;
		if (result != 0)
			break;
	}

	printf("%d", result);
}
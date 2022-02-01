#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int numOfNum = 0;
	scanf_s("%d", &numOfNum);
	vector<int> list(numOfNum);

	int max = 0;
	for (int i = 0; i < numOfNum; i++)
	{
		scanf_s("%d", &list[i]);
		if (max < list[i])
			max = list[i];
	}

	vector<int> primeList(max + 1);

	//2부터 500만까지의 소수 구하기
	primeList[0] = primeList[1] = -1;

	for (int i = 2; i * i <= max; i++)
	{
		if (primeList[i] != 0)
			continue;
		for (int j = i + i; j < max + 1; j = j + i)
		{
			if (primeList[j] == 0)
				primeList[j] = i;

		}
	}


	for (int i = 0; i < numOfNum; i++)
	{
		int target = list[i];
		
		while (target > 1)
		{
			if (primeList[target] == 0)
			{
				printf("%d ", target);
				target /= target;
			}

			else
			{
				printf("%d ", primeList[target]);
				target /= primeList[target];
			}
			
		}
		
		printf("\n");
	}
}
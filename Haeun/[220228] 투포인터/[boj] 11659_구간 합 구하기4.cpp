#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int numOfNum = 0, numOfSum = 0;
	scanf_s("%d %d", &numOfNum, &numOfSum);

	vector<int> list(numOfNum+1, 0);
	
	for (int i = 1; i <= numOfNum; i++)
	{
		int tmp = 0;
		scanf_s("%d", &tmp);
		list[i] = list[i - 1] + tmp;
		
	}

	for (int i = 0; i < numOfSum; i++)
	{
		int start = 0, end = 0;
		scanf_s("%d %d", &start, &end);
		printf("%d\n", list[end] - list[start - 1]);
	}
}
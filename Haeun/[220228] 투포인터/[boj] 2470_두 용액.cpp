//시간초과 -> 정답 코드 공부함
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<long long> v)
{
	for (int i = 0; i < v.size(); i++)
		printf("%lld ", v[i]);
	printf("\n");
}
void printSol(long long a, long long b)
{
	long long first = (a > b) ? b : a;
	long long second = (a > b) ? a : b;
	printf("%lld %lld", first, second);
	return;
}
void calculate0(vector<long long> v, int solutionNum)
{
	//같은 방향으로 이동하는 투포인터 사용하기
	long long solA = v[0], solB = v[1];

	long long minResult = abs(solA + solB);

	long long i = 0, j = 1;
	
	while (i< j && i < v.size() && j<v.size())
	{
		long long sum = v[i] + v[j];
		long long sumAbs = abs(sum);
		if (minResult > sumAbs)
		{
			solA = v[i];
			solB = v[j];
			minResult = sumAbs;
		}
		if (sum < 0)
			j++;

		else
			j = v.size();
		
		
		if (j == v.size() || i == j)
		{
			i++;
			j = i + 1;
		}
	}

	/*
	for (int i = 0; i < solutionNum; i++)
	{
		vi = v[i];
		for (int j = i + 1; j < solutionNum; j++)
		{
			long long vj = v[j];
			long long tmp = abs(vi + vj);
			if (tmp < minResult)
			{
				solA = vi;
				solB = vj;
				minResult = tmp;
				if (tmp == 0)
					break;
			}
		}
	}*/

	printSol(solA, solB);
	return;
}

int main(void)
{
	int solutionNum = 0;
	scanf_s("%d", &solutionNum);

	vector<long long> list(solutionNum, 0);

	for (int i = 0; i < solutionNum; i++)
		scanf_s("%lld", &list [i] );

	sort(list.begin(), list.end());//오름차순 정렬
	calculate0(list, solutionNum);
	
}
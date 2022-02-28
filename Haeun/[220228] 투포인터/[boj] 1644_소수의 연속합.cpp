//투포인터로 다시 구현해보기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<long long>& v)
{
	for (int i = 1; i < v.size(); i++)
		printf("%d ", v[i]);

	printf("\n");
}
void calculatePrime(vector<long long>& v, int n)
{
	vector<bool> v2(n + 1, true);

	v2[0] = false;
	v2[1] = false;

	for (long long i = 2; i * i <= n; i++)
	{
		for (long long j = i+i; j < v2.size(); j += i)
		{
			if (v2[j] == false) continue;
			v2[j] = false;
		}
	}
	
	v.push_back(0);
	for (int i = 2; i < v2.size(); i++)
		if (v2[i]) v.push_back(i+v.back());
		
	//printVector(v);
	return;
}
int findSum(vector<long long>& v, int target)
{
	int start = lower_bound(v.begin(), v.end(), target) - v.begin();
	int result = 0;

	for (int i = start; i < v.size(); i++)
	{
		//printf("v[i] : %lld\n", v[i]);
		if (v[i] == target)
		{
			result++;
			continue;
		}
		
		bool isSum = binary_search(v.begin(), v.end(), v[i] - target);
		//printf("%lld 존재 여부 : %d\n", v[i] - target, isSum);
		if (isSum)
			result++;
	
	}

	return result;
}
int main(void)
{
	int num = 0;
	scanf_s("%d", &num);
	vector<long long> list;

	calculatePrime(list, num);
	printf("%d", findSum(list, num));

}
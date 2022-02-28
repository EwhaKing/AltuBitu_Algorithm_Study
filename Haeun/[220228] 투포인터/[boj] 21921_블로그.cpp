#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> v)
{
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i]);
	printf("\n");
}
int calculateMaxVisitant(vector<int> v, vector<int>& v2, int term)
{
	int start = term - 1;

	for (int i = 0; i < term; i++)
		v2[0] += v[i];

	start++;

	int j = 1;
	for (int i = start; i < v.size(); i++)
	{
		v2[j] = v2[j - 1] - v[i-term] + v[i];
		j++;
	}
	
	//v2 오름차순 정렬
	sort(v2.begin(), v2.end());

	return v2.back();
}
int calculateNumOfTerm(vector<int> v2, int max)
{
	int num = lower_bound(v2.begin(), v2.end(), max) - v2.begin();
	return v2.size() - num;
}
int main(void)
{
	int n = 0, term = 0;
	scanf_s("%d %d", &n, &term);

	vector<int> list(n);
	vector<int> v2(list.size()-term+1, 0);

	for (int i = 0; i < n; i++)
		scanf_s("%d", &list[i]);

	int result = calculateMaxVisitant(list, v2, term);
	if (result == 0)
		printf("SAD");
	else
	{
		printf("%d\n", result);
		printf("%d", calculateNumOfTerm(v2, result));
	}

}
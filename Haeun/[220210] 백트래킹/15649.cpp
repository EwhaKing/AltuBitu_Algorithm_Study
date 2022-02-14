#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (int i = 0; i < v.size(); i++)
		printf("%d ", v[i]);
	printf("\n");
}
void makeSeq(int num, vector<int> &v, vector<bool>& check, int m)
{
	int target = check.size();
	if (v[m-1] != 0 && num == m)
	{
		printVector(v);
		return;
	}

	for (int i = 1; i < target; i++)
	{
		if (check[i] == false)
		{
			check[i] = true;
			v[num] = i;
			makeSeq(num+1, v, check, m);
			check[i] = false;
		}
	}
}
int main(void)
{
	int n = 0, m = 0;
	scanf_s("%d %d", &n, &m);

	vector<int> v(m);
	vector<bool> check(n + 1);
	makeSeq(0, v, check, m);
}
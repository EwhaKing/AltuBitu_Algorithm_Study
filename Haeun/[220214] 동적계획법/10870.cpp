#include <iostream>
#include <vector>
using namespace std;

int calculateFibo(int n)
{
	vector<int> v(n + 1);

	v[0] = 0;
	if (n != 0)
		v[1] = 1;

	for (int i = 2; i <= n; i++)
		v[i] = v[i - 1] + v[i - 2];
	
	return v[n];
	
}
int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	int num = calculateFibo(n);
	printf("%d", num);
}
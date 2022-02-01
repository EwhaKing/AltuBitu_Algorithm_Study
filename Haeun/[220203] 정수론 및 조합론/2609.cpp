#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	int min = (a > b) ? b : a;
	int max = (a > b) ? a : b;

	while (max % min != 0)
	{
		int tmp = min;
		min = max % min;
		max = tmp;

	}
	return min;
}
int lcm(int a, int b)
{
	int min = (a > b) ? b : a;
	int max = (a > b) ? a : b;
	
	int i = 1;
	while (1)
	{
		if ((max * i) % min == 0)
			break;
		
		i++;
	}
	return max * i;
}
int main(void)
{
	int numA = 0, numB = 0;
	scanf_s("%d %d", &numA, &numB);
	printf("%d\n", gcd(numA, numB));
	printf("%d", lcm(numA, numB));
	
}
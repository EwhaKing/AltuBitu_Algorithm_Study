#include <iostream>
using namespace std;

int main(void)
{
	int red = 0, brown = 0;
	int l = 0, w = 0;//l이 큰 수, w가 작은 수
	scanf_s("%d %d", &red, &brown);

	red /= 2;
	

	for (int i = 0; i < red/2+1; i++)
	{
		int min = i;
		int max = red - i;
		if ((min + 2) * max - (red * 2) == brown)
		{
			l = max;
			w = min + 2;
			break;
		}
	}

	printf("%d %d", l, w);
}
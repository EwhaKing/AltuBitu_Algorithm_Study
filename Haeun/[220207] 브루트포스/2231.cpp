#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int num = 0;
	int result = 0;
	scanf_s("%d", &num);


	for (int i = 1; i < num; i++)
	{
		int sum = 0;
		int tmp = i;

		while (tmp > 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum + i == num)
		{
			result = i;
			break;
		}
	}
	/*for (int i = 1; i < num; i++)
	{
		int tmp = num - i;
		int sum = 0;
		if (tmp <= 0)
			continue;
		string str = to_string(i);
		for (int i = 0; i < str.length(); i++)
			sum += str[i] - '0';

		if (sum == tmp)
		{
			result = i;
			break;
		}

	}*/
	
	printf("%d", result);
}
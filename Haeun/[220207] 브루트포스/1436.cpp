#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	string str = "666";
	int target = 0;
	
	int num = 666;
	while(target < n)
	{
		string tmp = to_string(num);
		if (tmp.find(str) != string::npos)
		{
			target++;
			if (target == n)
				break;
		}
		num++;
	}

	printf("%d", num);
}
#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
	int commandNum = 0;
	scanf_s("%d", &commandNum);
	stack<int> list;

	for (int i = 0; i < commandNum; i++)
	{
		int target = 0;
		string command;
		cin >> command;

		if (command == "push")
		{
			scanf_s("%d", &target);
			list.push(target);
		}
		else if (command == "pop")
		{
			if (list.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", list.top());
				list.pop();
			}

		}
		else if (command == "size")
		{
			printf("%d\n", list.size());
		}

		else if (command == "empty")
		{
			if (list.empty())
				printf("1\n");
			else
				printf("0\n");
		}
		else//command == "top"
		{
			if (list.empty())
				printf("-1\n");
			else
				printf("%d\n", list.top());
		}

	}
}
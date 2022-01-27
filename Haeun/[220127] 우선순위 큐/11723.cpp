#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str = "000000000000000000000";

	int commandNum = 0, target = 0;
	cin >> commandNum;

	for (int i = 0; i < commandNum; i++)
	{
		string command;
		cin >> command;

		if (command == "add")
		{
			cin >> target;
			if (str[target] == '0')//S에 target이 없는 경우
				str[target] = '1';

		}
		else if (command == "remove")
		{
			cin >> target;
			if (str[target] == '1')//S에 target이 있는 경우
				str[target] = '0';

		}
		else if (command == "check")
		{
			cin >> target;
			cout << str[target] << "\n";
		}
		else if (command == "toggle")
		{
			cin >> target;
			if (str[target] == '1')//S에 target이 있는 경우
				str[target] = '0';
			else//S에 target이 없는 경우
				str[target] = '1';
		}
		else if (command == "all")
		{
			str = "111111111111111111111";
		}
		else//empty
		{
			str = "000000000000000000000";
		}
	}
	

}
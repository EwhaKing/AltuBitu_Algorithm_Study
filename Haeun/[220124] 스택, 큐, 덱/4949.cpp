#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	

	while (1)
	{
		string str;
		getline(cin, str);

		if (str == ".")
			break;

		stack<char> list;
		bool check = true;

		for (int i = 0; i < str.length(); i++)
		{
			char ch = str[i];
			if (ch == '(' || ch == '[')//¿©´Â °ýÈ£
			{
				list.push(ch);
			}
			else if (ch == ')' || ch == ']')//´Ý´Â °ýÈ£
			{
				if ((ch == ')' && !list.empty() && list.top() == '(') || (!list.empty() && ch == ']' && list.top() == '['))//°ýÈ£ Â¦ÀÌ ¸ÂÀ» ¶§
				{
					list.pop();
				}
				else//°ýÈ£ Â¦ÀÌ ¸ÂÁö ¾ÊÀ» ¶§
				{
					check = false;
					break;
				}
			}
		}
		if (!check)//check°¡ false ÀÏ ¶§
		{
			printf("no\n");
		}

		else //check°¡ trueÀÏ ¶§
		{
			if (list.empty())
			{
				printf("yes\n");
			}
			else
				printf("no\n");
		}
		
	}

	
}
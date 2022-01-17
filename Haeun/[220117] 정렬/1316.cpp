#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool cmp(pair<int, char> a, pair<int, char> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	
	return a.second < b.second;
}
int main(void)
{
	int numOfWord = 0, result = 0;
	scanf_s("%d", &numOfWord);

	for (int i = 0; i < numOfWord; i++)
	{
		string str;
		cin >> str;

		vector<pair<int, char>> list(str.length());

		for (int i = 0; i < str.length(); i++)
		{
			list[i].first = i;
			list[i].second = str[i];
		}

		sort(list.begin(), list.end(), cmp);

		int flag = 0;
		for (int i = 0; i < list.size()-1; i++)
		{
			if (list[i].second == list[i + 1].second && list[i].first+1 != list[i+1].first)
			{
				flag = 1;
				break;
			}
		}
		
		if (flag == 0)
			result++;
	}
	printf("%d", result);
}
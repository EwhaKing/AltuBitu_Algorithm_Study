#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int Findmin(vector<vector<bool>>& list)
{
	int min = list.size() * list[0].size();
	for (int i = 0; i <= list.size() - 8; i++)
	{
		for (int j = 0; j <= list[0].size() - 8; j++)
		{
			bool tmp = list[i][j];
			int sum = 0;
			for (int x = i; x < i + 8; x++)
			{
				for (int y = j; y < j + 8; y++)
				{
					if (((i - x) % 2 == 0 && (j - y) % 2 == 0) || (abs(i - x) % 2 == 1 && abs(j - y) % 2 == 1))
					{
						if (tmp != list[x][y])
						{
							sum++;
						}
					}
					else
					{
						if (tmp == list[x][y])
						{
							sum++;

						}
					}
				}
			}
			if (sum < min)
			{
				min = sum;
			}
			
			tmp = !list[i][j];
			sum = 0;

			for (int x = i; x < i + 8; x++)
			{
				for (int y = j; y < j + 8; y++)
				{
					if (((i - x) % 2 == 0 && (j - y) % 2 == 0) || (abs(i - x) % 2 == 1 && abs(j - y) % 2 == 1))
					{
						if (tmp != list[x][y])
							sum++;
					}
					else
						if (tmp == list[x][y])
							sum++;
				}
			}

			if (sum < min)
			{
				min = sum;
			}
		}
	}

	return min;

}
int main(void)
{
	int n = 0, m = 0;
	scanf_s("%d %d", &n, &m);
	vector<vector<bool>> list(n, vector<bool>(m));
	//black false , white true

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			char ch;
			cin >> ch;
			if (ch == 'B')
				list[i][j] = false;
			else
				list[i][j] = true;

		}
	}


	printf("%d", Findmin(list));
}
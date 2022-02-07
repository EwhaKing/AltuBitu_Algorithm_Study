#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
	int n, visit[8001] = { 0, }, maxN = -4000, minN = 4000, curIdx = 0, maxVisit = 0, mode;
	cin >> n;
	vector<int> vec(n);
	float sum = 0;


	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		sum += vec[i];
		visit[vec[i] + 4000]++;
		maxN = max(maxN, vec[i]);
		minN = min(minN, vec[i]);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < 8001; i++)
	{
		if (visit[i] > maxVisit)
		{
			maxVisit = visit[i];
			curIdx = i;
			mode = i - 4000;
		}
	}
	
	for (int i = 0; i < 8001; i++)
	{
		if ((visit[i] == maxVisit) && (curIdx<i))
		{
			mode = i - 4000;
			break;
		}
	}


	cout << round(sum / n) <<'\n';
	cout << vec[n / 2]<<'\n';
	cout << mode << '\n';
	cout << maxN - minN;


	return 0;
}

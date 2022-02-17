#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
int main(void)
{
	int totalConferenceNum = 0;
	int result = 0;
	scanf("%d", &totalConferenceNum);

	vector<pair<int, int>> timeList(totalConferenceNum);
	
	for (int i = 0; i < totalConferenceNum; i++)
		scanf("%d %d", &timeList[i].first, &timeList[i].second);
	
	//회의 끝나는 시간을 기준으로 오름차순 정렬
	sort(timeList.begin(), timeList.end(), compare);

	int totalFinishTime = timeList.back().second;
	int startTime = 0; 

	int i = 0;

	while (startTime <= totalFinishTime && i<totalConferenceNum)
	{
		for (; i < totalConferenceNum; i++)
		{
			if (timeList[i].first >= startTime)
			{
				startTime = timeList[i].second;
				result++;
				i++;
				break;
			}
		}
	}

	printf("%d", result);
	
}

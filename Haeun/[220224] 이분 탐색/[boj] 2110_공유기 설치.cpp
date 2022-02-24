#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossibleInterval(int routerNum, int interval,int* maxInterval, vector<int>& v)
{
	int idx = 0;
	for (int i = 0; i < routerNum-1; i++)
	{
		int nextIdx = lower_bound(v.begin(), v.end(), v[idx] + interval) - v.begin();
		if (nextIdx < v.size() && nextIdx >= 0)//주어진 간격이 가능함
			idx = nextIdx;
		
		else return false;

	}

	//주어진 간격 interval이 가능하다면 다음 할당
	*maxInterval = interval;
	
	return true;

}
//가능한 interval을 이분탐색의 방식으로 찾아주는 함수
int binaryInterval(int routerNum, int firstLastInterval, int* maxInterval, vector<int>& v)
{
	int begin = 1;
	int end = firstLastInterval;
	int mid = 0;

	while (begin >= 1 && end <= firstLastInterval && begin <= end)
	{
		mid = (begin + end) / 2;
		
		//mid 간격의 interval이 v list에서 가능한지 확인해주는 함수
		bool result = isPossibleInterval(routerNum, mid, maxInterval, v);
		
		//mid 간격이 가능하다면 mid보다 큰 간격 중에 가능한게 있는지 끝까지 탐색해야함
		if (result)
			begin = mid + 1;
		
		//mid간격이 불가능하다면 mid보다 작은 간격 중에 가능한게 있는지 탐색해야함
		else
			end = mid - 1;
	}
	
	//isPossibleInterval함수에서 수정돼서 가능한 가장 큰 interval
	return *maxInterval;
}
int main(void)
{
	int homeNum = 0, routerNum =0;
	scanf_s("%d %d", &homeNum, &routerNum);

	vector<int> homeList(homeNum);

	for (int i = 0; i < homeNum; i++)
		scanf_s("%d", &homeList[i]);

	//집 좌표 기준으로 오름차순 정렬
	sort(homeList.begin(), homeList.end());
	
	//정렬 후 첫번째 집과 마지막 집의 간격
	int firstLastInterval = homeList.back() - homeList.front();
	
	int maxInterval = 0;

	if (routerNum == 2)
		printf("%d", firstLastInterval);
	
	else
		printf("%d",binaryInterval(routerNum, firstLastInterval, &maxInterval, homeList));
		
	
}

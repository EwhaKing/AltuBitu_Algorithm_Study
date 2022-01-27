#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	priority_queue<int> pq;

	int operationNum = 0;
	scanf_s("%d", &operationNum);

	for (int i = 0; i < operationNum; i++)
	{
		int num = 0;
		scanf_s("%d", &num);
		if (num != 0)//큐에 num을 추가
		{
			pq.push(num);
		}
		else // 가장 큰값을 출력하고 큐에서 그 값을 삭제
		{
			if (pq.empty())//큐가 비어있을 때
				printf("0\n");
			else
			{
				printf("%d\n", pq.top());
				pq.pop(); //삭제
			}
		}
	}


}
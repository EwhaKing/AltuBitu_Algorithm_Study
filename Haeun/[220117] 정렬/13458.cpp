#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int examRoom = 0, proctor = 0, subProctor = 0;
	long long result = 0;
	scanf_s("%d", &examRoom);

	vector<int> testTakerList(examRoom);

	for (int i = 0; i < examRoom; i++)
		scanf_s("%d", &testTakerList[i]);

	scanf_s("%d %d", &proctor, &subProctor);

	for (int i = 0; i < examRoom; i++)
	{
		testTakerList[i] -= proctor;
		result++;
		if (testTakerList[i] > 0)
		{
			if (testTakerList[i] % subProctor == 0)
				result += testTakerList[i] / subProctor;
			else
				result += testTakerList[i] / subProctor + (long long)1;
		}
	}

	printf("%lld", result);

}
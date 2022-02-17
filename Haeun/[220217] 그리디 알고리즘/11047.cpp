#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a > b;//내림차순
}
int main(void)
{
	int coinKinds = 0, targetPrice = 0;
	int coinKindArr[10] = { 0, };

	scanf("%d %d", &coinKinds, &targetPrice);
	for (int i = 0; i < coinKinds; i++)
		scanf("%d", &coinKindArr[i]);

	sort(coinKindArr, coinKindArr + coinKinds, compare);

	int minNumOfCoin = 0;
	int i = 0;
	while (targetPrice > 0)
	{
		//중간 과정 확인 코드////printf("\ncoinKindArr[i] : %d  targetPrice : %d\n", coinKindArr[i], targetPrice);
		minNumOfCoin += targetPrice / coinKindArr[i];
		targetPrice %= coinKindArr[i];
		
		//중간 과정 확인 코드////printf("\ncoinKindArr[i] : %d  targetPrice : %d\n", coinKindArr[i], targetPrice);
		
		i++;
	}
	
	printf("%d", minNumOfCoin);
}

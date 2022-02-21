#include <iostream>
#include <vector>
#include <string>
using namespace std;

void switchTarget(vector<bool>& switchList, int target)
{
	switchList[target] = !switchList[target];
}
void girlSwitch(vector<bool>& switchList, int myNum)
{
	int lastNum = switchList.size() - 1;
	switchTarget(switchList, myNum);
	if (myNum == 1 || myNum == lastNum)
		return;


	int scope = 1;

	while (myNum + scope <= lastNum && myNum - scope >= 1 && (switchList[myNum + scope] == switchList[myNum - scope]))
	{
		switchTarget(switchList, myNum + scope);
		switchTarget(switchList, myNum - scope);
		scope++;
	}
}
void boySwitch(vector<bool>& switchList, int myNum)
{
	for (int i = 1; i < switchList.size(); i++)
	{
		if (i % myNum == 0)
			switchTarget(switchList, i);
	}
}
int main(void)
{
	int switchNum = 0, stuNum = 0;
	scanf_s("%d", &switchNum);

	vector<bool> switchList(switchNum + 1);

	for (int i = 1; i <= switchNum; i++)
	{
		int tmp = 0;
		scanf_s("%d", &tmp);
		if (tmp == 0)
			switchList[i] = false;
		else switchList[i] = true;
	}

	scanf_s("%d", &stuNum);

	for (int i = 0; i < stuNum; i++)
	{
		int sex = 0, myNum = 0;
		scanf_s("%d %d", &sex, &myNum);
		if (sex == 1)
			boySwitch(switchList, myNum);
		else girlSwitch(switchList, myNum);
	}

	for (int i = 1; i <= switchNum; i++)
	{
		cout << switchList[i] << " ";
		if (i % 20 == 0)
			printf("\n");
	}
}
#include <iostream>
#include <deque>
using namespace std;

void getGroundCard(deque<int>& taker, deque<int>& loser, deque<int>& takerG, deque<int>& loserG)
{
	int size = loserG.size();

	//������ �׶��忡�� ī�� ������
	for (int i = 0; i < size; i++)
	{
		int tmp = loserG.back();
		loserG.pop_back();
		taker.push_back(tmp);
	}

	//�ڽ��� �׶��忡�� ī�� ������
	size = takerG.size();
	for (int i = 0; i < size; i++)
	{
		int tmp = takerG.back();
		takerG.pop_back();
		taker.push_back(tmp);
	}
	
}
bool cardOpen(deque<int>& personInTurn, deque<int>& personInWaiting, deque<int>& personInTurnG, deque<int>& personInWaitingG)
{
	//ī�� ��
	int tmp = personInTurn.front();
	personInTurn.pop_front();
	personInTurnG.push_front(tmp);

	if (personInTurn.empty())//����ī�嵦 �����
		return true;

	return false;
}
void checkBell(deque<int>& dodo, deque<int>& suyeon, deque<int>& dodoG, deque<int>& suyeonG)
{
	if (!dodoG.empty() && !suyeonG.empty() && dodoG.front() + suyeonG.front() == 5)//�׶��� �� �� ī������� ���� 5�� ��
		getGroundCard(suyeon, dodo, suyeonG, dodoG);

	else if ((!dodoG.empty() && dodoG.front() == 5) || (!suyeonG.empty() && suyeonG.front() == 5))//�׶��� �� ���� ���� 5�� ī�尡 ���� ��
		getGroundCard(dodo, suyeon, dodoG, suyeonG);
}
void printWinner(deque<int>& dodo, deque<int>& suyeon)
{
	if (dodo.size() > suyeon.size())
		printf("do");
	else if (dodo.size() < suyeon.size())
		printf("su");
	else//���
		printf("dosu");
}
int main(void)
{
	int cardNum = 0, gameNum = 0;
	scanf_s("%d %d", &cardNum, &gameNum);

	//ī�� ��
	deque<int> dodo;
	deque<int> suyeon;

	//�׶��� ��
	deque<int> dodoG;
	deque<int> suyeonG;

	//�ʱ� ī�� �� �Է�
	for (int i = 0; i < cardNum; i++)
	{
		int tmpD = 0, tmpS = 0;
		scanf_s("%d %d", &tmpD, &tmpS);
		dodo.push_front(tmpD);
		suyeon.push_front(tmpS);
	}

	bool check = 0;

	for (int i = 0; i < gameNum; i++)
	{
		if (i % 2 == 0)
			check = cardOpen(dodo, suyeon, dodoG, suyeonG);
		else
			check = cardOpen(suyeon, dodo, suyeonG, dodoG);
		
		if (check)//�� �� �Ѹ��̶� ī�尡 �� �������� ��
			break;

		checkBell(dodo, suyeon, dodoG, suyeonG);
	}
	
	printWinner(dodo, suyeon);
}
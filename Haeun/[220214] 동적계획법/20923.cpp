#include <iostream>
#include <deque>
using namespace std;

void getGroundCard(deque<int>& taker, deque<int>& loser, deque<int>& takerG, deque<int>& loserG)
{
	int size = loserG.size();

	//상대방의 그라운드에서 카드 가져옴
	for (int i = 0; i < size; i++)
	{
		int tmp = loserG.back();
		loserG.pop_back();
		taker.push_back(tmp);
	}

	//자신의 그라운드에서 카드 가져옴
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
	//카드 냄
	int tmp = personInTurn.front();
	personInTurn.pop_front();
	personInTurnG.push_front(tmp);

	if (personInTurn.empty())//도도카드덱 비었음
		return true;

	return false;
}
void checkBell(deque<int>& dodo, deque<int>& suyeon, deque<int>& dodoG, deque<int>& suyeonG)
{
	if (!dodoG.empty() && !suyeonG.empty() && dodoG.front() + suyeonG.front() == 5)//그라운드 맨 위 카드숫자의 합이 5일 때
		getGroundCard(suyeon, dodo, suyeonG, dodoG);

	else if ((!dodoG.empty() && dodoG.front() == 5) || (!suyeonG.empty() && suyeonG.front() == 5))//그라운드 맨 위에 숫자 5인 카드가 있을 때
		getGroundCard(dodo, suyeon, dodoG, suyeonG);
}
void printWinner(deque<int>& dodo, deque<int>& suyeon)
{
	if (dodo.size() > suyeon.size())
		printf("do");
	else if (dodo.size() < suyeon.size())
		printf("su");
	else//비김
		printf("dosu");
}
int main(void)
{
	int cardNum = 0, gameNum = 0;
	scanf_s("%d %d", &cardNum, &gameNum);

	//카드 덱
	deque<int> dodo;
	deque<int> suyeon;

	//그라운드 덱
	deque<int> dodoG;
	deque<int> suyeonG;

	//초기 카드 덱 입력
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
		
		if (check)//둘 중 한명이라도 카드가 다 떨어졌을 때
			break;

		checkBell(dodo, suyeon, dodoG, suyeonG);
	}
	
	printWinner(dodo, suyeon);
}
#include <iostream>
#include <vector>
using namespace std;
void calculateList(string a, vector<int>& v)
{
	for (int i = 0; i < a.length(); i++)
	{
		int tmp = a[i] - 65;
		v[tmp]++;
	}
	return;
}
bool isSimilarWord(string a, string b, vector<int>& listA)
{
	vector<int> tmp(26, 0);
	calculateList(b, tmp);

	int result = 0;
	int length = (a.length() > b.length()) ? a.length() : b.length();
	string target = (a.length() > b.length()) ? a : b;

	for (int i = 0; i < length; i++)
	{
		int idx = target[i] - 65;
		if (listA[idx] != tmp[idx])
		{
			result += abs(listA[idx] - tmp[idx]);
			listA[idx] =tmp[idx]= 0;
		}
	}

	int dif = a.length() - b.length();
	if (result == 0 && dif == 0)//같은 구성
		return true;

	if (result <= 1 && abs(dif) <= 1)//하나 빼거나 더하거나 교체해서 같은 구성만들 수 있음
		return true;

	return false;
}
int main(void)
{
	int numOfWord = 0;
	scanf_s("%d", &numOfWord);

	string first;
	cin >> first;

	vector<int> listA(26, 0);
	calculateList(first, listA);

	int result = 0;
	for (int i = 0; i < numOfWord - 1; i++)
	{
		string str;
		cin >> str;
		if (isSimilarWord(first, str, listA))
		{
			result++;
			//cout << str << "\n";
		}
			
	}

	printf("%d", result);
}

#include <iostream>
#include <string>
using namespace std;


long long gcd(long long a, long long b)
{
	long long min = (a > b) ? b : a;
	long long max = (a > b) ? a : b;

	while (max%min != 0)
	{
		long long tmp = min;
		min = max % min;
		max = tmp;
	}

	return min;
}
int main(void)
{
	string str;
	cin >> str;

	string strN = "";
	string strM = "";
	int check = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ':')
		{
			check = 1;
			continue;
		}
		if (check == 0)//n
			strN += str[i];
			
		else//m
			strM += str[i];
		
	}

	long long n = 0, m = 0;
	n = stoll(strN);
	m = stoll(strM);
	
	long long num = gcd(n, m);

	printf("%lld:%lld", n / num, m / num);
}
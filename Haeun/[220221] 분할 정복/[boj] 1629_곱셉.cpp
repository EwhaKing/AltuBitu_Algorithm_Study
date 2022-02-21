#include <iostream>
using namespace std;

long long ModularExp(long long a, long long b, long long c)
{
	if (b == 1)
		return a % c;
	else if (b % 2 == 0)
	{
		long long tmp = ModularExp(a, b / 2, c);
		return (tmp * tmp) % c;
	}
	else//b�� 1�� �ƴ� Ȧ���� ��
		return (ModularExp(a, b-1, c) * ModularExp(a, 1, c) % c);

	
}
int main(void)
{
	//a�� b�� % c ���ϱ�
	int a, b, c = 0;
	scanf_s("%d %d %d", &a, &b, &c);

	long long result = ModularExp(a, b, c);
	printf("%lld", result);
}
#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);
	deque<int> list(n);

	for (int i = 0; i < n; i++)
		list[i] = i + 1;

	while(list.size() > 1)
	{
		list.pop_front();
		list.push_back(list.front());
		list.pop_front();
		/*for (int i = 0; i < list.size(); i++)
			printf("%d ", list[i]);
		printf("\n");*/
	}
	
	printf("%d", list.front());

}
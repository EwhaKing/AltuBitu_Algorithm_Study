/*
//해결못해서 답지 보고 공부함
//내가 짠 거 기준으로 해결해보기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int vIdx;

typedef struct node
{
	int n;
	node* left;
	node* right;
	node* p;//parent

}node;
int binarySearch(vector<int> v, int find_value)
{
	int idx = 0;
	bool check = false;

	int begin = 0;
	int end = v.size();
	int target = (begin + end) / 2;;

	while (target >= 0 && target <= v.size() && (begin <= end))
	{
		target = (begin + end) / 2;
		if (v[target] == find_value)
		{

			idx = target;
			return idx;
		}
		else if (v[target] < find_value)
			begin = target + 1;

		else//v[target] > find_value
			end = target - 1;

	}

	return -1;
}
void initializeNode(int num, node* v)
{
	v->left = v;
	v->right = v;
	v->p = v;
	v->n = num;
}
void makeNode(node* v, bool isLeft, int num)
{
	node newNode;
	newNode.n = 0;
	initializeNode(num, &newNode);
	if (isLeft)//왼쪽 자식 노드
		v->left = &newNode;
	else
		v->right = &newNode;
}
node* findTree(vector<int> inList, vector<int> preList, node* p, bool isLeft)
{
	int point = binarySearch(inList, preList[vIdx]);
	int tmpNum = preList[vIdx++];
	vector<int> newL;
	vector<int> newR;

	if (point == 0)
	{
		makeNode(p, isLeft, inList[0]);
		return p;
	}

	for (int i = 0; i < point; i++)
		newL.push_back(inList[i]);
	for (int i = point + 1; i < inList.size(); i++)
		newR.push_back(inList[i]);

	

	node tmp;
	initializeNode(tmpNum, &tmp);
	if (newL.size() != 0) 
	{ 
		p = findTree(newL, preList, &tmp, true); 
	}

	if (newR.size() != 0)
	{
		p = findTree(newR, preList, &tmp, false);
	}

}
void postTree(node* v)
{
	//LRv
	if (v->left->n != 0)
		postTree(v->left);
	if (v->right->n != 0)
		postTree(v->right);
	printf("%d ", v->n);
}
int main(void)
{
	int testNum = 0;
	scanf_s("%d", &testNum);
	

	for (int i = 0; i < testNum; i++)
	{
		int num = 0;
		scanf_s("%d", &num);


		vector<int> preorderList(num);
		vector<int> inorderList(num);
		
		for (int j = 0; j < num; j++)
			scanf_s("%d", &preorderList[j]);

		for (int j = 0; j < num; j++)
			scanf_s("%d", &inorderList[j]);

		node v;
		initializeNode(preorderList[0], &v);
		
		vIdx = 0;
		findTree(inorderList, preorderList, &v, false);
		
		postTree(&v);
	}
}*/

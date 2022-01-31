/*
220131
���ֿ�
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/**
 * �켱���� ť(�ּ� ��)���� ���� ū ������ N��° ū ������ �� N���� ���ڰ� �������
 * ���� ū ������ N��° ū �������� �ּ� ���� �־��� ������ root�� �ִ� ���� N��° ū ���� �Ǵ� ��
 */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, input;
    priority_queue<int, vector<int>, greater<>> pq; //�ּ� ��, �����̶� �ݴ�

    cin >> n;
    int size = n * n;
    while (size--) {
        //�Է�
        cin >> input;

        //����
        if (pq.size() < n) //�켱���� ť�� ũ�Ⱑ N���� �۴ٸ� �׳� ����
            pq.push(input);
        else if (pq.top() < input) { //�켱���� ť�� ũ�Ⱑ N �̻��̶�� root ��庸�� input�� Ŭ ���� ����
            pq.pop();
            pq.push(input);
        }
    }

    //���
    cout << pq.top();
}
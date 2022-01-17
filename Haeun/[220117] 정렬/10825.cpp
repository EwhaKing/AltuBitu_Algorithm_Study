#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student
{
    public:
        string name = "";
        int korean = 0;
        int english = 0;
        int math = 0;

        Student()//�⺻ ������
        {
            this->name = "";
            this->korean = 0;
            this->english = 0;
            this->math = 0;

        }
        Student(string _name, int k, int e, int m)
        {
            this->name = _name;
            this->korean = k;
            this->english = e;
            this->math = m;
        }

};
bool cmp(Student a, Student b)
{
    if (a.korean == b.korean)
    {
        if (a.english == b.english)
        {
            if (a.math == b.math)
            {
                return a.name < b.name;
            }
            else//�������� ��������
                return a.math > b.math;
        }
        else//�������� ��������
            return a.english < b.english;
    }
    else
        return a.korean > b.korean;//�������� ��������
}
int main(void)
{
    int numOfStu = 0;
    scanf_s("%d", &numOfStu);
    vector<Student> stuList(numOfStu);

    for (int i = 0; i < numOfStu; i++)
    {
        cin >> stuList[i].name;
        scanf_s("%d %d %d", &stuList[i].korean, &stuList[i].english, &stuList[i].math);
    }

    sort(stuList.begin(), stuList.end(), cmp);

    for (int i = 0; i < numOfStu; i++)
    {
        cout << stuList[i].name;
        printf("\n");
    }

}

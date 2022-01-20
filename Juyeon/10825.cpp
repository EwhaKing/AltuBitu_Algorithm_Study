/*
* 220117
* ¿Ã¡÷ø¨
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct info {
    string name;
    int korean, english, math;
};

bool cmp(const info& i1, const info& i2) {
    if (i1.korean == i2.korean) {
        if (i1.english == i2.english) {
            if (i1.math == i2.math)
                return i1.name < i2.name;
            return i1.math > i2.math;
        }
        return i1.english < i2.english;
    }
    return i1.korean > i2.korean;
}

bool cmpAdv(const info& i1, const info& i2) {
    if (i1.korean != i2.korean) 
        return i1.korean > i2.korean;
    if (i1.english != i2.english)
        return i1.english < i2.english;
    if (i1.math != i2.math) 
        return i1.math > i2.math;
    return i1.name < i2.name; 
}


int main() {
    int n;
    vector<info> student;

    cin >> n;
    student.assign(n, {});
    for (int i = 0; i < n; i++)
        cin >> student[i].name >> student[i].korean >> student[i].english >> student[i].math;

    sort(student.begin(), student.end(), cmpAdv);

    for (int i = 0; i < n; i++)
        cout << student[i].name << '\n';
}

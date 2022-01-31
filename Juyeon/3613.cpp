/*
220131
���ֿ�
*/

#include <iostream>

using namespace std;

bool isCpp(string str) { //c++ �����ΰ�?
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) //�빮�ڰ� ������ �ȵ�
            return false;
        if (str[i] == '_' && (i == 0 || i == str.size() - 1 || str[i - 1] == '_')) //ù or ������ ���ڰ� '_' �Ǵ� '_'�� ���� ����
            return false;
    }
    return true;
}

bool isJava(string str) { //java �����ΰ�?
    return !isupper(str[0]) && str.find('_') == string::npos; //ù ���ڰ� �빮�ڰų�, '_'�� ������ �ȵ�
}

string toCpp(string str) { //java ������ c++��
    string result;
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) //�빮�ڶ�� �տ� '_' ����
            result += '_';
        result += tolower(str[i]); //�ҹ��ڷ� �ٲ㼭 �ֱ�
    }
    return result;
}

string toJava(string str) { //c++ ������ java��
    string result;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '_') { //'_' ��� �� ���� ���ڸ� �빮�ڷ� �ٲ㼭 ����
            result += toupper(str[i + 1]);
            i++;
            continue;
        }
        result += str[i]; //������ ���ڴ� �׳� ����
    }
    return result;
}

/**
 * 1. �Է����� �־��� ������ C++ ���Ŀ��� �°�, JAVA ���Ŀ��� ���� �� ���� (ex. name)
 * 2. "Error!"�� ��� (C++)
 *    2-1. �����('_')�� �����ϰų�, ������ ����
 *    2-2. �����('_')�� �����ؼ� �����ϴ� ����
 *    2-3. �빮�ڰ� �����ϴ� ����
 * 3. "Error!"�� ��� (Java)
 *    3-1. �빮�ڷ� �����ϴ� ����
 *    3-2. �����('_')�� �����ϴ� ����
 */
int main() {
    string str;

    cin >> str;
    bool is_cpp = isCpp(str);
    bool is_java = isJava(str);

    if (is_cpp && is_java) //�� ���Ŀ� ��� �����ϸ� �׳� ���
        cout << str;
    else if (is_cpp) //c++ �����̶�� java�� �ٲ㼭 ���
        cout << toJava(str);
    else if (is_java) //java �����̶�� c++�� �ٲ㼭 ���
        cout << toCpp(str);
    else //�� �� �ƴ϶�� ����
        cout << "Error!";
}
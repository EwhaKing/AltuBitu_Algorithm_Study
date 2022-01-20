#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main (){
    int num,num2;
    cin >> num;

    set<int> result;

    for(int i=0;i<num;i++){
        cin >> num2;
        result.insert(num2);}

    for(auto iter:result)
        cout << iter << " ";

}
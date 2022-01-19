#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int num, i;
    cin>>num;
    vector<int> list(num);
    
    for(i=0; i<num; i++) {
        cin>>list[i];
    }
    
    sort(list.begin(), list.end());
    
    for(i=0; i<num; i++) {
        cout<<list[i]<<"\n";
    }
    
}

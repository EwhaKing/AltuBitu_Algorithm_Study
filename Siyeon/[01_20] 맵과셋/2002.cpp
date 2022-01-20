#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    string car;
    int num, i, best;
    int overtake=0;
    
    map<string, int> cars;
    
    cin>>num;
    vector<int> carsNum(num);
    
    for(i=1; i<=num; i++) {
        cin>>car;
        cars[car] = i;
    }
    
    for(i=0; i<num; i++) {
        cin>>car;
        carsNum[i] = cars[car];
    }
    
    best = num + 1;
    for(i=num-1; i>=0; i--) {
        if(carsNum[i]<best) best = carsNum[i];
        else overtake++;
    }
    cout<<overtake;  
}

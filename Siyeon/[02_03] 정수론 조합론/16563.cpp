#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
const int SIZE = 5000000; //매번 isPrime 호출하면 시간초과됨.

vector<int> isPrime() {
    vector <int> prime_nums(SIZE+1, 0);
    for(int i=2; i<=SIZE; i++) {
        prime_nums[i] = i;
    }
    
    for(int i=2; i<=sqrt(SIZE); i++) {
        if(prime_nums[i] == i) {
            for(int j = i*i; j<=SIZE; j+=i) {
                if(prime_nums[j] == j) {
                    prime_nums[j] = i;
                }
            }
        }
    }
    return prime_nums;
}

int main() {
    //입출력 속도 향상
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int num;
    cin >> num;
    vector <int> inputs(num);
    
    for(int i = 0; i< num; i++) {
        cin >> inputs[i];
    }
    
    vector<int> prime_nums = isPrime();
    
    for(int i = 0; i<num; i++) {
        while(inputs[i] > 1) {
            cout<< prime_nums[inputs[i]]<<" ";
            inputs[i] = inputs[i]/prime_nums[inputs[i]];
        }
        cout<<"\n";
    }
}

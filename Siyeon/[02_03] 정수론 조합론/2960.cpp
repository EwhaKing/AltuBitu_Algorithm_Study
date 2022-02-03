#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int isPrime(int size, int num, vector<bool> is_prime) {
    int count = 0, answer = 0, i;
    is_prime[0] = is_prime[1] = false;
    for (i = 2; i <= sqrt(size); i++) {
        if (is_prime[i]) {
            count++;
            if (count == num) answer = i;
            for (int j = i * i; j <= size; j += i) {
                if (is_prime[j]) {
                    is_prime[j] = false;
                    count++;
                    if (count == num) answer = j;
                }
                
            }
        }
    }
    if (answer == 0) {
        for (int j = i + 1; j <= size; j++) {
            if (is_prime[j]) {
                count++;
                if (count == num) answer = j;
            }
        }
    }
    return answer;
}

int main() {
    int size, num, answer;
    cin >> size >> num;
    vector <bool> net(size+1, true);
    answer = isPrime(size, num, net);
    cout << answer;
}

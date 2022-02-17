#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt=0;

    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]-1==reserve[j] ||lost[i]+1==reserve[j] ){
                cnt++;
                reserve[i]=reserve[i]-1;
                break;


            }
        }
    }
    return cnt+n-lost.size();
}
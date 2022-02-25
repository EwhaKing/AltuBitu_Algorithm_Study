#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int cnt=0;
    vector<int> student;
    student.assign(n,0);

    for(int i=0;i<lost.size();i++){
        for(int j=0;j<reserve.size();j++){
            if(lost[i]-1==reserve[j] || lost[i]+1==reserve[j] ){
                if(student[reserve[j]]==0){
                    cnt++;
                    student[reserve[j]]=1;
                }
            }
        }
    }
    return n-lost.size()+cnt;
}
int main() {
    vector<int> lost = {2, 4};
    vector<int> reserve = {1, 3, 5};
    int n = 5;

    cout << solution(n, lost, reserve);

    return 0;
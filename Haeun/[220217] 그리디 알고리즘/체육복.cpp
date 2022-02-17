#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    //sort(lost.begin(), lost.end());
    //sort(reserve.begin(), reserve.end());
    
    //통일된 리스트에 학생들 체육복 수를 저장
    //빌린 사람이 또 빌려주는 경우를 제외하기 위해 빌린사람의 값은 -1로 할당함
    vector<int> v(n+1, 1);
    
    for(int i =0; i<reserve.size(); i++)
        v[reserve[i]]++;
        
    for(int i =0; i<lost.size(); i++)
        v[lost[i]]--;
    
    //한명한테만 제공할 수 있는 사람이 먼저 제공하기
    for(int i=2; i<n; i++)
    {
        if(v[i-1] == 0 && v[i+1]==0 && v[i] == 2)
            continue;
        
        else//한명에게만 제공가능
        {
            if(v[i] == 2)
            {
                if(v[i+1] == 0)
                {
                    v[i]--;
                    v[i+1] = -1;
                }
                else if(v[i-1] == 0)
                {
                    v[i]--;
                    v[i-1] = -1;
                }
                
            }
            
        }
    }
    
    for(int i =1; i<n+1; i+=n-1)
    {
        int tmp = (i==1)? 1:-1;
        //printf("tmp : %d, %d\n", tmp, i);
        if(v[i] == 0 && v[i+tmp] == 2)
        {
            v[i+tmp]--;
            v[i] = -1;
            //printf("%d가 %d에게 제공\n", i+tmp, i);
        }
    }
    for(int i=2; i<n; i++)
    {
        if(v[i]==0 && v[i-1] == 2)
        {
            v[i]= -1;
            v[i-1]--;
        }
        else if(v[i]==0 && v[i+1] == 2)
        {
            v[i]= -1;
            v[i+1]--;
        }
       
    }
    
    for(int i =1; i<n+1; i++)
    {
        if(v[i] > 0 || v[i] == -1)

            answer++;
    }
    return answer;
}

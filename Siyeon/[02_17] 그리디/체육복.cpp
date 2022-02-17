import java.util.Arrays;

class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        answer = n-lost.length;
        
        for(int i=0; i<lost.length; i++) {
            for(int j=0; j<reserve.length; j++) {
                if(lost[i]==reserve[j]) {
                    reserve[j] = -2;
                    lost[i] = -4;
                    answer++;
                }
            }
        }
        
        for(int i=0; i<lost.length; i++) {
            if(lost[i]==-4) continue;
            
            for(int j=0; j<reserve.length; j++) {
                if(lost[i]==reserve[j]+1) {
                    reserve[j] = -2;
                    if(answer<n) answer++;
                }
                else if(lost[i]==reserve[j]-1) {
                    reserve[j] = -2;
                    if(answer<n) answer++;
                }
            }
        }
        
        return answer;
    }
}

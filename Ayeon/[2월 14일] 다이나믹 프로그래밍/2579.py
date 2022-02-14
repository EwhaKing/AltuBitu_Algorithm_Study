import sys
n=int(sys.stdin.readline())
s=[int(sys.stdin.readline()) for _ in range(n)]

dp=[]
dp.append(s[0])
if n>1:
    dp.append(s[0]+s[1])
if n>2:
    dp.append(max(s[0]+s[2], s[1]+s[2]))
    for i in range(3,n):
        dp[i] = max(dp[i-2],dp[i-3]+s[i-1])+s[i]
print(dp.pop())
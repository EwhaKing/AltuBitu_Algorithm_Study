import sys
N=int(sys.stdin.readline())

DK={}
for i in range(N):
    DK[ sys.stdin.readline().strip() ] = i
YS=[]
for i in range(N):
    YS.append(DK[ sys.stdin.readline().strip() ])
cnt=0
for i in range(N-1):
    if YS[i] > min(YS[i:N]):
        cnt+=1
print(cnt)




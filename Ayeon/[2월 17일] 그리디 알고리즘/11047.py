import sys
N, K = map(int, sys.stdin.readline().split())
A= [ int(sys.stdin.readline()) for _ in range(N) ]

cnt=0
while (K>0):
    i=0
    for i in range(N):
        if (A[i]>K):
            i=i-1
            break
    m=K//A[i]
    cnt+=m
    K-=A[i]*m
print(cnt)




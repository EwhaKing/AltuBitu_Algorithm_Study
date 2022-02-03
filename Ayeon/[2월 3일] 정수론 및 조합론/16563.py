#시간초과
import sys
N=int(sys.stdin.readline())
M=list(map(int, sys.stdin.readline().split()))

for i in range(N):
    p=[]
    a=M[i]
    k=2
    while( k**2 <= a ):
        if (a%k==0):
            p.append(k)
            a//=k
        k+=1
    if (a>1):
        p.append(a)
    for _ in p:
        print(_, end=" ")
    print()
    


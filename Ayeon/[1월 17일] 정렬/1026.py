import sys
N =int(sys.stdin.readline())
A =list(map(int, sys.stdin.readline().split()))
B =list(map(int, sys.stdin.readline().split()))

B.sort()
A.sort(reverse=True)

s=0
for i in range(N):
    s+=(A[i]*B[i])
print(s)
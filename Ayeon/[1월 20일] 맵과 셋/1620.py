import sys

N, M = map(int, sys.stdin.readline().split())

p = {}
pp = []
for i in range(N):
    p[ sys.stdin.readline().strip() ] = i+1

pp = list(p)
for i in range(M):
    q = sys.stdin.readline().strip()
    if (q.isdigit()):
        print(pp[int(q)-1])
    else:
        print(p[q])


#시간초과-> Set의 Intersection
import sys
N, M = map(int, sys.stdin.readline().split())
n = { sys.stdin.readline().strip() for i in range(N) }
m = { sys.stdin.readline().strip() for i in range(M) }

n = n&m
n=sorted(list(n))
print(len(n))
for _ in n:
    print(_)

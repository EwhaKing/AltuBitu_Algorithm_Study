import sys
N =int(sys.stdin.readline())
n = sorted(list(set(list(map(int, sys.stdin.readline().split())))))

for _ in n:
    print(_, end=' ')
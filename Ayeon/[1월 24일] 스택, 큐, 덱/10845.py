from collections import deque
import sys
q=deque()
N=int(sys.stdin.readline())
for i in range(N):
    c=list(sys.stdin.readline().split())
    if c[0]=='push':
        q.append(c[1])
    elif c[0]=='pop':
        if len(q)==0:
            print(-1)
        else:
            print(q.popleft())
    elif c[0]=='size':
        print(len(q))
    elif c[0]=='empty':
        print(int(len(q)==0))
    elif c[0]=='front':
        if len(q)==0:
            print(-1)
        else:
            print(q[0])
    elif c[0]=='back':
        if len(q)==0:
            print(-1)
        else:
            print(q[-1])

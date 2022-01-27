import sys
N=int(sys.stdin.readline())
a=[]
for i in range(N):
    c =list(sys.stdin.readline().split())
    if c[0] =='push':
        a.append(c[1])
    elif c[0] =='pop':
        if (len(a)==0):
            print(-1)
        else:
            print(a.pop())
    elif c[0] =='size':
        print(len(a))
    elif c[0] =='empty':
        print(int(len(a)==0))
    elif c[0] =='top':
        if len(a)==0:
            print(-1)
        else:
            print(a[-1])
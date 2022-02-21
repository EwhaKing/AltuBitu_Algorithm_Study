import sys
n=int(sys.stdin.readline())
switch=list(map(int, sys.stdin.readline().split()))
m=int(sys.stdin.readline())

for _ in range(m):
    s, idx = map(int, sys.stdin.readline().split())
    if s==1:
        while idx<=n:
            switch[idx-1]=-switch[idx-1]+1
            idx+=idx
    elif s==2:
        len=1
        switch[idx-1]=-switch[idx-1]+1
        while (idx-len>0) & (idx+len<=n):
            if switch[idx-1-len] != switch[idx-1+len]:
                switch[idx-1]=-switch[idx-1]+1
                break
            switch[idx-1-len]=-switch[idx-1-len]+1
            switch[idx-1+len]=-switch[idx-1+len]+1
            len+=1

for i in range(n):
    print(switch[i], end=' ')
    if (i+1)%20==0:
        print()
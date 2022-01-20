from functools import cmp_to_key
import sys

def c1(a, b):
    if len(a) > len(b):
        return 1
    elif len(a) == len(b):
        sa=0
        for i in range( len(a) ):
            if a[i].isdigit()==True:
                sa+=int(a[i])
        sb=0
        for i in range( len(a) ):
            if b[i].isdigit()==True:
                sb+=int(b[i])
        if sa > sb:
            return 1 
        elif sa < sb:
            return -1
        else:
            if a < b:
                return -1
            elif a > b:
                return 1
            else:
                return 0
    else:
        return -1
        
        


N=int(sys.stdin.readline())
d = [sys.stdin.readline().strip() for i in range(N)]
d=sorted(d, key=cmp_to_key(c1))

for _ in d:
    print(_)


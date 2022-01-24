#Stack
#1. Stack underflow 
#2. 문자열 탐색이 끝났는데 스택이 비어있지 않음

import sys
while(True):
    n=list(sys.stdin.readline())
    if ((len(n)==2) & (n[0]=='.')):
        break
    s=[]
    f=True
    for i in n:
        if (i=='(') | (i=='['):
            s.append(i)
        elif (i==')') | (i==']'):
            if len(s)==0:
                f=False
                break
            j=s.pop()
            if ((i==')') & (j=='(')) | ((i==']') & (j=='[')):
                continue
            else:
                f=False
                break
    if len(s)!=0:
        f=False
    if f==False:
        print('no')
    else:
        print('yes')
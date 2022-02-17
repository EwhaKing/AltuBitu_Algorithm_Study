# 오답
import sys
N=int(sys.stdin.readline())
c=[ list(map(int, sys.stdin.readline().split())) for _ in range(N)]
# C[0] = [1, 4] C[0][0] 시작 시간/ C[0][1] 끝 시간
# 사용할 수 있는 최대 회의 수

# 정렬
c=sorted(c, key= lambda x: x[0])
print(c)
cnt=0
check=[]
for i in c:
    flag=True
    m=i[0]+1
    n=i[1]+1
    for j in range(m, n):
        if (j in check):
            flag=False
    if flag==True:
        a=i[0]
        b=i[1]+1
        for j in range(a, b):
            check.append(j)
        cnt+=1
print('check', check)
print('cnt', cnt)
import sys
N=int(sys.stdin.readline())
A=list(map(int, sys.stdin.readline().split()))
M=int(sys.stdin.readline())
B=list(map(int, sys.stdin.readline().split()))
A.sort()
def f1(n):
    global N
    start=0
    end=N-1
    mid=N//2
    while (start<mid) & (mid<end):
        mid=(start+end)//2
        if n==A[mid]:
            return 1        
        if n>A[mid]:
            start=mid+1
        else:
            end=mid-1
    if (n==A[start]) | (n==A[end]):
        return 1
    return 0


for b in B:
    print(f1(b))
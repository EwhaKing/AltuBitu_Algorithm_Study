###
import sys
N=int(sys.stdin.readline())
A=list(map(int, sys.stdin.readline().split()))
M=int(sys.stdin.readline())
B=list(map(int, sys.stdin.readline().split()))
answer=[]
A.sort()

def card(n):
    cnt=0
    left=0
    right=N-1
    binary_search(left, right, n)
    return cnt

def binary_search(left, right, n):
    if (left==right) & (n==A[left]):
        return left

    while left<right:
        mid=(left+right)//2
        if n>A[mid]:
            left=mid
        elif n<A[mid]:
            right=mid-1
        else:
            l1 = binary_search(left, mid-1, n)
            r1 = binary_search(mid, right, n)

for b in B:
    answer.append(card(b))
print(answer)
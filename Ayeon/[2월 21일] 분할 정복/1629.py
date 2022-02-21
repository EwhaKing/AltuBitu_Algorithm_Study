# a^b mod m -> 수학 알고리즘
import sys
A,B,C=map(int, sys.stdin.readline().split())
def multi(b):
    if b==1:
        return A%C
    if b%2==0:
        return (multi(b//2)**2)%C
    return (multi(b-1))*A%C
print(multi(B))

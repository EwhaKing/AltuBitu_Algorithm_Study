import sys
N,M = map(int, sys.stdin.readline().split())
m2=N*M
if N<M:
    N,M=M,N
while True:
    O=M
    M=N%M
    N=O
    if M==0:
        m1=N
        break
print('%d\n%d'%(m1,m2/m1))
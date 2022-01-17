import sys
N =int(sys.stdin.readline())
n=0

A= list(map(int, sys.stdin.readline().split()))
B, C = map(int, sys.stdin.readline().split())

for a in A:
	a-=B
	n+=1
	if a>0:
		n+=a//C
		if a%C > 0:
			n+=1
print(n)
import sys
N =int(sys.stdin.readline())

cnt=N
for _ in range(N):
	w=sys.stdin.readline()
	c=[]
	for i in w:
		if i not in c:
			c.append(i)
		elif c[len(c)-1] == i:
			continue
		else:
			cnt-=1
			break
print(cnt)
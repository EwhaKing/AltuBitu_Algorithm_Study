import sys
N=int(sys.stdin.readline())
p=[ sys.stdin.readline().split() for _ in range(N) ]
W=0
B=0
def paper(x0, y0, size_x, size_y):
    global W, B
    color=p[x0][y0]
    if (size_x==1) & (size_y==1):
        if color=='0':
            W=W+1
        elif color=='1':
            B=B+1
    else:
        flag=True
        for i in range(0, size_x):
            for j in range(0, size_y):
                if p[x0+i][y0+j] != color:   
                    flag=False
                    break
            if flag==False:
                break
        if flag==False:
            paper(x0, y0, size_x//2, size_y//2)
            paper(x0+size_x//2, y0, size_x//2, size_y//2)
            paper(x0, y0+size_y//2, size_x//2, size_y//2)
            paper(x0+size_x//2, y0+size_y//2, size_x//2, size_y//2)
        else:
            if color=='0':
                W=W+1
            elif color=='1':
                B=B+1
    
paper(0, 0, N, N)
print(W)
print(B)

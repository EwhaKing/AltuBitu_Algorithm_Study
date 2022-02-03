import sys
N, K =map(int, sys.stdin.readline().split())

I=[ i for i in range(2,N+1) ]

flag=True
while len(I)>0:
    if flag == False:
        break
    P=I[0]
    K-=1
    if K==0:
        print(P)
        break
    I=I[1:]
    for i in I:
        if i%P == 0:
            K-=1
            if K==0:
                flag=False
                print(i)
                break
            I.remove(i)

            
            
    
        

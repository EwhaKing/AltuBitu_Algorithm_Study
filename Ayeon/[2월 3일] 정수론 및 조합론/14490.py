import sys
n,m = map(int, sys.stdin.readline().split(':'))

while True:
    a = int(min(n,m))
    flag = True
    for i in range(2, a+1):
        if ((n%i == 0) & (m%i == 0)):
            flag = False
            n=n//i
            m=m//i
            break
    if flag == True:
        break
        
print('%d:%d'%(n,m))
                
                 
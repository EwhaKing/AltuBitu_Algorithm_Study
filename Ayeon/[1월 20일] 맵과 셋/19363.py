from operator import truediv
import sys

W0,I0,T = map(int, sys.stdin.readline().split())
D, I, A = map(int, sys.stdin.readline().split())

W1=W2=W0
I2=I0

# (1)
W1 = W1 + (I-I0-A)*D
if W1<=0:
    print('Danger Diet')
else:
    print(W1,I0)

# (2)
die=False
while(D>0):
    W2=W2+I-I2-A
    if(W2<=0):
        die=True
        break
    if(abs(I-I2-A) >T):
        I2=I2+(I-I2-A)//2
    if(I2<=0):
        die=True
        break
    D-=1

if(die==True):
    print('Danger Diet')
else:
    if I2<I0:
        print(W2,I2,'YOYO')
    else:
        print(W2,I2,'NO')

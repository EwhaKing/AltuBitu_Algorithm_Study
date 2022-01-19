# 큰 수
# Python3 -> int 범위를 넘어가는 정수도 type int로 취급
import sys
A, B = map(int, sys.stdin.readline().split())
print(A+B)
print(type(A+B))

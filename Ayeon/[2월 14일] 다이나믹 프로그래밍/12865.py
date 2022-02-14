import sys
N, K = map(int, sys.stdin.readline().split())
W =[ list(map(int, sys.stdin.readline().split())) for i in range(N)]
W = sorted(W, key=lambda w: w[0]) #무게

bag=[0]*N

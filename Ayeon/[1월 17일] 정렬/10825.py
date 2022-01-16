def check(l, r):
    if (l[1] == r[1]):
        if (l[2] == r[2]):
            if ( l[3] == r[3] ):
                return l[0]<r[0]
            return l[3]>r[3]
        return l[2]<r[2]
    return l[1] > r[1]
    

def merge(left, right):
    sorted=[]
    i=0
    j=0
    while( (i<len(left)) & (j<len(right)) ):
        if(check(left[i], right[j])==True):
            sorted.append(left[i])
            i+=1
        else:
            sorted.append(right[j])
            j+=1        

    while( i<len(left) ):   
        sorted.append(left[i])
        i+=1
    
    while( j<len(right) ):
        sorted.append(right[j])
        j+=1
    
    return sorted


def merge_sort(unsorted):
    if len(unsorted) <=1:
        return unsorted
    
    mid=len(unsorted)//2

    left1=merge_sort(unsorted[:mid])
    right1=merge_sort(unsorted[mid:])

    return merge(left1, right1)

import sys

N=int(input())
# 이름 / 국어 점수 / 영어 점수 / 수학 점수
arr=[]

for i in range(N):
    n, s1, s2, s3 = sys.stdin.readline().split()
    s1=int(s1)
    s2=int(s2)
    s3=int(s3)
    arr.append([n, s1, s2, s3])

arr=merge_sort(arr)

for s in arr:
    print(s[0])
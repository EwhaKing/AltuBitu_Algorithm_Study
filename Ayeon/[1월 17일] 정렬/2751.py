import sys

def merge_sort(unsorted):
    if len(unsorted) <= 1:
        return unsorted
    
    mid=len(unsorted)//2
    left=unsorted[:mid]
    right=unsorted[mid:]

    left1=merge_sort(left)
    right1=merge_sort(right)
    return merge(left1, right1)

def merge(left, right):
    i=0
    j=0
    sorted=[]

    while((i<len(left)) & (j<len(right))):
        if left[i] < right[j]:
            sorted.append(left[i])
            i+=1
        else:
            sorted.append(right[j])
            j+=1
    
    while(i<len(left)):
        sorted.append(left[i])
        i+=1

    while(j<len(right)):
        sorted.append(right[j])
        j+=1
    
    return sorted

N=int(input())
a=[int(sys.stdin.readline().rstrip()) for i in range(N)]

#a.sort()
a=merge_sort(a)

for i in a:
    sys.stdout.write(str(i)+'\n')


        
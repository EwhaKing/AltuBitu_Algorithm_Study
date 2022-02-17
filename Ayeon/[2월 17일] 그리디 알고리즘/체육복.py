def solution(n, lost, reserve):
    for r in reserve:
        if r in lost:
            reserve.remove(r)
            lost.remove(r)          
    answer = n - len(lost)  
    for r in reserve:
        if (r-1 in lost) | (r+1 in lost):
            answer+=1       
    if answer > n:
        answer = n
    return answer
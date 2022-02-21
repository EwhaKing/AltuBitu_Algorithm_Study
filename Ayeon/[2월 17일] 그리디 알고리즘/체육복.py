def solution(n, lost, reserve):
    same=[]
    for r in reserve:
        if r in lost:
            same.append(r)
    for s in same:
        reserve.remove(s)
        lost.remove(s)
    answer = n - len(lost)  
    for r in reserve:
        if (r-1 in lost) | (r+1 in lost):
            answer+=1       
    if answer > n:
        answer = n
    return answer
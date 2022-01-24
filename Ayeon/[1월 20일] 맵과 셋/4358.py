import sys
t={}
l=0
for tree in sys.stdin:
    l+=1
    tree=tree.split('\n')[0]
    if t.get(tree):
        t[tree] = t[tree]+1
    else:
        t[tree] = 1
u=sorted(t)
for v in u:
    print("%s %.4f" % (v,t[v]/l*100))
    #print(v, round(t[v]*100/l, 4))
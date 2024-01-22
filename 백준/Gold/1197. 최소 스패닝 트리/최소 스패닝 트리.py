import sys

sys.setrecursionlimit(10**7)

v, e = map(int, sys.stdin.readline().split())
edge = []
for i in range(e):
    a,b,c = map(int,sys.stdin.readline().split())
    edge.append((a,b,c))
# kruskal
edge.sort(key=lambda x: x[2])
# union_find
parent = [i for i in range(v+1)]

def find(x):
    if parent[x] == x:
        return x
    parent[x] = find(parent[x])
    return parent[x]

def union_parent(a,b):
    a = find(a)
    b = find(b)

    if a<b:
        parent[b] = a
    else:
        parent[a] = b

def same_parent(a,b):
    return find(a) == find(b)
ans = 0
for a,b,c in edge:
    if not same_parent(a,b):
        union_parent(a,b)
        ans += c
print(ans)

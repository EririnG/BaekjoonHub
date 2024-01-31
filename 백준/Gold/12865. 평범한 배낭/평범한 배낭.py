import sys

n,k = list(map(int,sys.stdin.readline().split()))
item_list = []
knap = [[0] * (k+1) for i in range(n+1)]

for i in range(n):
    a, b = list(map(int,sys.stdin.readline().split()))
    item_list.append((a,b))
item_list.insert(0,(0,0))

for i in range(1, n+1):
    for j in range(1, k+1):
        weight = item_list[i][0]
        value = item_list[i][1]
        if j < weight:
            knap[i][j] = knap[i-1][j]
        else:
            knap[i][j] = max(value + knap[i-1][j-weight],knap[i-1][j])
    
print(knap[-1][-1])
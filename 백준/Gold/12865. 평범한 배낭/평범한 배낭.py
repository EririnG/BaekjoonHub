import sys

n, k = list(map(int,sys.stdin.readline().split()))
item_list = [[0,0]]

knap = [[0 for i in range(k+1)] for i in range(n+1)]

for i in range(n):
    item_list.append(list(map(int,sys.stdin.readline().split())))

for i in range(1,n+1):
    for j in range(k+1):
        weight = item_list[i][0]
        value = item_list[i][1]

        if j < weight:
            knap[i][j] = knap[i-1][j]
        else:
            knap[i][j] = max(value + knap[i-1][j-weight],knap[i-1][j])
print(knap[-1][-1])
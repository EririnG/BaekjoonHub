import sys

Num,target = map(int,sys.stdin.readline().split())
tree_arr = list(map(int,sys.stdin.readline().split()))

start, end = 0, max(tree_arr)

while start<=end:
    mid = (start + end)//2
    sum = 0

    for i in tree_arr:
        if i>=mid:
            sum += (i-mid)
    if sum >= target:
        start = mid + 1
    else:
        end = mid - 1
print(end)

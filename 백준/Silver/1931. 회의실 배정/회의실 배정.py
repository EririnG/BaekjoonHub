import sys

test_case = int(sys.stdin.readline())
time_table = []
endpoint = 0
ans = 0
for i in range(test_case):
    a, b = list(map(int,sys.stdin.readline().split()))
    time_table.append((a,b))
time_table.sort(key=lambda x:(x[1] ,x[0]))


for newstart,newend in time_table:
    if endpoint <= newstart:
        ans += 1
        endpoint = newend
print(ans)
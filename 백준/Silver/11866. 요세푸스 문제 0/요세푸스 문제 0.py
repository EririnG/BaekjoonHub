import sys

N,K = map(int,sys.stdin.readline().split())
ans = []
circle = []
index = K
for i in range(1,N+1):
    circle.append(i)

for i in range(N):
    while index>len(circle):
        index = index-len(circle)
    ans.append(circle[index-1])
    circle.remove(circle[index-1])
    index = index+K-1
print(f"<",end='')
for i in ans:
    if i == ans[-1]:
        print(i,end='')
        break
    print(i,end=', ')
print(">")

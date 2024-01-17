import sys

m,n,l = map(int,sys.stdin.readline().split()) # 사대개수, 동물수, 사정거리
place = list(map(int,sys.stdin.readline().split())) # 사대
x,y = [],[] # 동물 좌표
ans = set()

for i in range(n):
    temp1,temp2 = list(map(int,sys.stdin.readline().split()))
    x.append(temp1)
    y.append(temp2)

for i in range(n):
    for j in place:
        if abs(j-x[i])+y[i] <= l:
            ans.add(i)
            break
print(len(ans))


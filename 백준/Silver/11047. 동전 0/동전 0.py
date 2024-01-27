import sys
n , k = map(int,sys.stdin.readline().split())
coin = []
cnt = 0
for i in range(n):
    coin.append(int(sys.stdin.readline()))

for i in range(len(coin)-1,-1,-1):
    if k >= coin[i]:
       cnt += k//coin[i]
       k = k%coin[i]

print(cnt)
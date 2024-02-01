import sys

n = int(sys.stdin.readline())
stairs = []

for j in range(n):
    stairs.append(int(sys.stdin.readline()))
stairs.insert(0,0)
dp = [0] * (n+1)

if n == 1 or n == 2:
    print(sum(stairs))
    exit()

dp[1] = stairs[1]
dp[2] = stairs[1] + stairs[2]
dp[3] = max(stairs[1]+stairs[3],stairs[2]+stairs[3])
for i in range(4,n+1):
    dp[i] = max(dp[i-2]+stairs[i],dp[i-3]+stairs[i]+stairs[i-1])
print(dp[-1])

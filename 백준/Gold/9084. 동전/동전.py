import sys

test_case = int(sys.stdin.readline())

for i in range(test_case):
	n = int(sys.stdin.readline())
	coin = list(map(int,sys.stdin.readline().split()))
	coin.insert(0,0)
	pay = int(sys.stdin.readline())
	
	dp = [[0] * (pay + 1) for i in range(n+1)]
	for i in range(n+1):
		dp[i][0] = 1

	for i in range(1, n+1):
		for j in range(1,pay+1):
			dp[i][j] = dp[i-1][j]
			if j - coin[i] >= 0:
				dp[i][j] += dp[i][j-coin[i]]
	print(dp[-1][-1])
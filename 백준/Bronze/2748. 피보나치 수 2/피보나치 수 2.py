import sys

num = int(sys.stdin.readline())
fibo = []
for i in range(num):
    if i == 0 or i == 1:
        fibo.append(1)
    else:
        fibo.append(fibo[i-1] + fibo[i-2])

print(fibo[-1])
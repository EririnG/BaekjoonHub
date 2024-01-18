import sys

N = int(sys.stdin.readline())
Origin=N
temp1 = 0
ans = 0

while True:
    if N<10:
        temp1 = N
    else:
        temp1 = int(str(N)[0]) + int(str(N)[-1])
        
    if (temp1 >= 10):
        temp1 = temp1 % 10

    N = (N%10)*10 + int(temp1)
    ans += 1
    if Origin == N:
        break

print(ans)
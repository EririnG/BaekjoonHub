tmp1, tmp2 =map(int,input().split())
ans = tmp1 - tmp2
if ans < 0:
    ans *= -1
print(ans)
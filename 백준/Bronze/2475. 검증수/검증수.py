tmp1, tmp2, tmp3,tmp4,tmp5 =map(int,input().split())
tmp1 = tmp1 * tmp1
tmp2 = tmp2 * tmp2
tmp3 = tmp3 * tmp3
tmp4 = tmp4 * tmp4
tmp5 = tmp5 * tmp5
ans = tmp1 + tmp2 + tmp3 + tmp4 + tmp5
ans = ans % 10
print(ans)
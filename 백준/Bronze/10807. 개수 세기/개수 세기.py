test_case = int(input())
list_num = list(map(int,input().split()))
num = int(input())
ans = 0
for i in list_num:
    if i == num:
        ans+=1
print(ans)

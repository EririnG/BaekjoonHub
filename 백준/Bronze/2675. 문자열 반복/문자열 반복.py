test_case = int(input())
for i in range(test_case):    
    repeat, s = input().split()
    ans = ''
    for j in range(len(s)):
        ans += s[j]*int(repeat)
    print(ans)
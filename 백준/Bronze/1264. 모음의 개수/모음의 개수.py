a = ['a','e','i','o','u','A','E','I','O','U']
while True:
    case = input()
    if case == '#':
        break
    ans = 0
    for i in case:
        for j in a:
            if i == j:
                ans += 1
                break
    print(ans)
import sys

test_case = int(sys.stdin.readline())
for i in range(test_case):
    app = []
    n = int(sys.stdin.readline())
    for j in range(n):
        a, b = list(map(int,sys.stdin.readline().split()))
        app.append((a, b))
    
    app.sort()
    top = 0
    ans = 1

    for i in range(1,len(app)):
        if app[i][1] < app[top][1]:
            top = i
            ans += 1
    print(ans)

    
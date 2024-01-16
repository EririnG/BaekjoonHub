import sys

test_case = int(sys.stdin.readline())
ans = []
for i in range(test_case):
    instruction = sys.stdin.readline().split()
    if instruction[0] == 'push':
        ans.append(instruction[1])
    elif instruction[0] == 'pop':
        if len(ans) == 0:
            print(-1)
        else:
            print(ans[-1])
            ans.pop()
    elif instruction[0] == 'size':
        print(len(ans))
    elif instruction[0] == 'empty':
        if len(ans) == 0:
            print(1)
        else:
            print(0)
    elif instruction[0] == 'top':
        if len(ans) == 0:
            print(-1)
        else:
            print(ans[-1])
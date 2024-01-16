import sys
from collections import deque

test_case = int(sys.stdin.readline())
ans = deque([])
for i in range(test_case):
    instruction = sys.stdin.readline().split()
    if instruction[0] == 'push':
        ans.append(instruction[1])
    elif instruction[0] == 'pop':
        if len(ans) == 0:
            print(-1)
        else:
            print(ans[0])
            ans.popleft()
    elif instruction[0] == 'size':
        print(len(ans))
    elif instruction[0] == 'empty':
        if len(ans) == 0:
            print(1)
        else:
            print(0)
    elif instruction[0] == 'front':
        if len(ans) == 0:
            print(-1)
        else:
            print(ans[0])
    elif instruction[0] == 'back':
        if len(ans) == 0:
            print(-1)
        else:
            print(ans[-1])
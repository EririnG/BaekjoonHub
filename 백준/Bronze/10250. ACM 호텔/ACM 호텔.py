import sys

test_case = int(sys.stdin.readline())

for i in range(test_case):
    H, W, N = map(int,sys.stdin.readline().split())
    floor = N%H
    room = N//H
    if floor == 0:
        print((H*100)+room)
    else:
        print((floor*100)+room+1)
import sys

arr = list(map(int,sys.stdin.readline().split()))

arr.sort()
print(' '.join(map(str,arr)))

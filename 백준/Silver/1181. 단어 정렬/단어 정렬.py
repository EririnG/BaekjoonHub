import sys

arr = set(list())
test_case = int(input())

for i in range(test_case):
    arr.add(sys.stdin.readline().strip())

arr=sorted(arr,key=lambda x : (len(x),x))
print('\n'.join(arr))
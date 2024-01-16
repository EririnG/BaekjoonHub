import sys

test_case = int(input())
a = []
for i in range(test_case):
    a.append(int(sys.stdin.readline()))
a=sorted(a)
for i in a:
    print(i) 
import sys

case = int(sys.stdin.readline())

for i in range(case):
    _string = (list(map(str,sys.stdin.readline().rstrip())))
    for i in _string:
        if ord(i)>=65 and ord(i)<=90:
            i = chr(ord(i)+32)
            print(i,end='')
        else:
            print(i,end='')
    print()
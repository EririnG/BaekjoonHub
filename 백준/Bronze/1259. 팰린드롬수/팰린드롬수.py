import sys

while True:
    num = int(sys.stdin.readline())
    if num == 0:
        break
    num = str(num)
    temp = ''
    for i in range(len(num)-1,-1,-1):
        temp += num[i]
    if num == temp:
        print('yes')
    else:
        print('no')
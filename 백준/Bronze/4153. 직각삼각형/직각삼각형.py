import sys

while True:
    num_arr = list(map(int,sys.stdin.readline().split()))
    if num_arr[1] == 0:
        break
    num_arr.sort()
    if num_arr[0]**2 + num_arr[1]**2 == num_arr[2]**2:
        print('right')
    else:
        print('wrong')
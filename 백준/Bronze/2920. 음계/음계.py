def ascending(num = list):
    for i in range(1,len(num)+1):
        if i != num[i-1]:
            return False
    return True

def descending(num = list):
    for i in range(len(num),0,-1):
        if i != num[len(num)-i]:
            return False
    return True       

import sys

num_list = list(map(int,sys.stdin.readline().split()))
if ascending(num_list):
    print('ascending')
elif descending(num_list):
    print('descending')
else:
    print('mixed')

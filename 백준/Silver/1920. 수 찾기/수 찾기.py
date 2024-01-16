def binary_search(target,start,end):
    if start>end:
        return print(0)
    
    mid = (start+end)//2

    if N_arr[mid] == target:
        return print(1)
    elif N_arr[mid] > target:
        end = mid -1
    else:
        start = mid +1

    return binary_search(target,start,end)

import sys



N = int(sys.stdin.readline())
N_arr = list(map(int,sys.stdin.readline().split()))
M = int(sys.stdin.readline())
M_arr = map(int,sys.stdin.readline().split())
ans =0

N_arr = sorted(N_arr)
for i in M_arr:
    binary_search(i,0,len(N_arr)-1)



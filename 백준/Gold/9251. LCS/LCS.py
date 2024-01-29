import sys

first_string = list(map(str,sys.stdin.readline().strip()))
second_string = list(map(str,sys.stdin.readline().rstrip()))
first_string.insert(0,'1')
second_string.insert(0,'2')
lcs_arr = [[0 for i in range(len(second_string))]for i in range(len(first_string))]


for i in range(1,len(first_string)):
    for j in range(1,len(second_string)):
        if first_string[i] == second_string[j]:
            lcs_arr[i][j] = lcs_arr[i-1][j-1] + 1
        elif first_string[i] != second_string[j]:
            lcs_arr[i][j] = max(lcs_arr[i-1][j],lcs_arr[i][j-1])

print(lcs_arr[-1][-1])
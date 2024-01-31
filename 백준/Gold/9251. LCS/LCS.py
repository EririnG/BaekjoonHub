import sys

first_string = list(map(str,sys.stdin.readline().rstrip()))
second_string = list(map(str,sys.stdin.readline().rstrip()))

lcs = [[0 for i in range(len(second_string)+1)]for i in range(len(first_string)+1)]
first_string.insert(0,0)
second_string.insert(0,0)

for i in range(1,len(first_string)):
    for j in range(1,len(second_string)):
        if first_string[i] == second_string[j]:
            lcs[i][j] = lcs[i-1][j-1] + 1
        else:
            lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1])

print(lcs[-1][-1])

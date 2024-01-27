import sys

_string = list(map(str,sys.stdin.readline().rstrip().split('-')))
_list = []
for i in _string:
    ans = 0
    temp = i.split('+')
    for j in temp:
        ans += int(j)
    _list.append(ans)

n = _list[0]
for i in range(1,len(_list)):
    n -= _list[i]

print(n)
import sys

num , party = map(int,sys.stdin.readline().split())
news = list(map(int,sys.stdin.readline().split()))

num = num * party
for i in range(5):
    print(news[i]-num, end=' ')

chess = list(map(int,input().split()))
correct_chess = [1,1,2,2,2,8]
for i in range(len(chess)):
    print((chess[i]-correct_chess[i])*-1,end=' ')

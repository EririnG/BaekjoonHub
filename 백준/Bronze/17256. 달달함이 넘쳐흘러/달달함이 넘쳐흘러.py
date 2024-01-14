A = list(map(int,input().split()))
C = list(map(int,input().split()))
B = []

B.append(C[0] - A[2])
B.append(int(C[1] / A[1]))
B.append( C[2] - A[0])

for i in range(len(B)):
    print(B[i],end=' ')
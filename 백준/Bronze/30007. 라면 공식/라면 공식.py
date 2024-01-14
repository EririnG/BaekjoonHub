test_case =int(input())

for i in range(test_case):
    A,B,X = map(int,input().split())
    print(A*(X-1)+B)
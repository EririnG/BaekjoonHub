N,A,B = map(int,input().split())

if N>A or B>A:
    print('Bus')
elif A==B and A>=N :
    print('Anything')
else:
    print('Subway')

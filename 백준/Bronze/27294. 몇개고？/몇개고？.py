time, alcohol = map(int,input().split())

if alcohol >= 1:
    print(280)
elif time <= 11:
    print(280)
elif time >= 12 and time <= 16:
    print(320)
else :
    print(280)
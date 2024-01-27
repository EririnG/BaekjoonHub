import sys
num = int(sys.stdin.readline())
a = 1
b = 2
c = 0
for i in range(2,num):
    c = (a + b)%15746
    a = b
    b = c
    
if num == 1:
    print(1)
    quit()
elif num == 2:
    print(2)
    quit()
else:    
    print(c)
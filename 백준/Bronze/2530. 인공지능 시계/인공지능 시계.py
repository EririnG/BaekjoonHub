import sys

clock, minute,seconds = map(int,sys.stdin.readline().split())
cook_duck = int(sys.stdin.readline())

minute += cook_duck//60
seconds += cook_duck%60

while seconds > 59:
    minute += 1
    seconds -= 60
while minute > 59:
    clock += 1
    minute -= 60
while clock >23:
    clock -= 24

print(clock,minute,seconds,end=' ')

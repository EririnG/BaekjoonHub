ans = input()
for i in ans:
    if ord(i)>=97:
        print(chr(ord(i)-32),end="")
    else:
        print(chr(ord(i)+32),end='')
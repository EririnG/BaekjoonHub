test_case = int(input())

for i in range(test_case):
    pw = input()
    if  len(pw) >= 6 and len(pw) <= 9:
        print('yes')
    else:
        print('no')
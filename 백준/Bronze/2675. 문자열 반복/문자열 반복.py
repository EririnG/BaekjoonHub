test_case = int(input())

for i in range(test_case):
    repeat, char = input().split()
    for j in range(len(char)):
        print(char[j]*int(repeat),end='')
    print()

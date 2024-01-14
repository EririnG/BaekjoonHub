a = 'WelcomeToSMUPC'
index = int(input())
if index > 14:
    index = index%14-1
    print(a[index])
else:
    print(a[index-1])
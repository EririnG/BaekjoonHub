num = int(input())
num_list = list(map(int,input().split()))
cnt = 0
for i in num_list:
    if i == 1:
        continue  
    for j in range(2,i+1):
        if i % j == 0 :
            if j == i:
                cnt += 1
            break
        
print(cnt)


def prime_num(num):
    for i in range(2,num+1):
        if num % i == 0:
            if num == i:
                return True
            return False

test_case = int(input())
prime = []
for i in range(test_case):
    n = int(input())
    for i in range(int(n/2),1,-1):
       if prime_num(i):
           if(prime_num(n-i)):
            print(i, n-i)
            break


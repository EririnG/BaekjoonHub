def recursionadd(n):
    if n <= 1:
        return 1
    ans = n + recursionadd(n-1)
    return ans

def recurcubed(n):
    if n <= 1:
        return 1
    ans = n**3 + recurcubed(n-1)
    return ans

num = int(input())
print(recursionadd(num))
print(recursionadd(num)**2)
print(recurcubed(num))





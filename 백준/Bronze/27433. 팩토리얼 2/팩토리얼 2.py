def factorial(n):
    if n <= 1:
        return 1
    ans = n * factorial(n-1)
    return ans
num = int(input())
print(factorial(num))
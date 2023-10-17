def power(x, n):
    if n == 0:
        return 1
    else:
        return x * power(x, n - 1)

# Taking input from the user
x, n = map(int, input().split())

# Calculating x^n using the power function
result = power(x, n)

# Printing the result
print(result)

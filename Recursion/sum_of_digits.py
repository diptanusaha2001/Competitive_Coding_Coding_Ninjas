def sumOfDigits(n):
    if n < 10:
        return n
    return n % 10 + sumOfDigits(n // 10)

# Taking input
n = int(input())

# Calling the recursive function
sum_of_digits = sumOfDigits(n)

# Printing the result
print(sum_of_digits)

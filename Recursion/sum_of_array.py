def arraySum(arr, n):
    if n == 0:
        return 0
    
    return arr[n - 1] + arraySum(arr, n - 1)

# Taking input
n = int(input())
arr = list(map(int, input().split()))

# Calling the recursive function
sum_of_elements = arraySum(arr, n)

# Printing the result
print(sum_of_elements)

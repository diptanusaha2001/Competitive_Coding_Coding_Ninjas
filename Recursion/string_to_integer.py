def stringToInteger(s):
    if len(s) == 1:
        return int(s)
    return stringToInteger(s[:-1]) * 10 + int(s[-1])

# Taking input
s = input()

# Calling the recursive function
integer = stringToInteger(s)

# Printing the result
print(integer)

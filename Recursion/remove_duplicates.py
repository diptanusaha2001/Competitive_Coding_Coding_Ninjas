def removeConsecutiveDuplicates(s):
    if len(s) <= 1:
        return s

    if s[0] == s[1]:
        return removeConsecutiveDuplicates(s[1:])
    else:
        return s[0] + removeConsecutiveDuplicates(s[1:])

# Taking input
s = input()

# Calling the recursive function
modified_string = removeConsecutiveDuplicates(s)

# Printing the result
print(modified_string)

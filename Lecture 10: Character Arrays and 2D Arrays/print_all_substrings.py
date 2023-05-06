# taking string as input
string = input()

# lenght of the string
n = len(string)

# formula for total number of substrings n*(n+1)/2
total = (n*(n+1)) // 2
print('Total number of substrings are:', total)

# for ever char traverse ever char which is ahead
for i in range(n):
    for j in range(i, n):
        # printing sustring in range i to j
        print(string[i:j+1])

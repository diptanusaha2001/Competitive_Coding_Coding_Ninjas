def find_min_length_word(s):
    # split the string into words
    words = s.split()

    # initialize the minimum length word to be the first word in the list
    min_word = words[0]

    # iterate through the list of words and update the minimum length word if a shorter word is found
    for word in words:
        if len(word) < len(min_word):
            min_word = word

    # return the minimum length word
    return min_word
s = input()
print(find_min_length_word(s))

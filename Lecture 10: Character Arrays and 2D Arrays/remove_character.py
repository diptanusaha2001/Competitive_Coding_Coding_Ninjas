def removeCharacter(s, ch):
    res = s.replace(ch, '')
    print(res)


s = input()
ch = input()

removeCharacter(s, ch)

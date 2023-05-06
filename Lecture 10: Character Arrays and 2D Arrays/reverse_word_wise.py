class py_solution:
    def reverse_words(self, s):
        return ' '.join(reversed(s.split()))

a = input()
print(py_solution().reverse_words(a))

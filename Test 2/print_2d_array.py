n, m = map(int, input().split())
for i in range(n):
    a = list(map(int, input().split()))
    for j in range(n-i):
        print(*a)

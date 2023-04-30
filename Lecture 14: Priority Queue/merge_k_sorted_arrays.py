from sys import stdin
import heapq

def mergeKSortedArrays(lst):
    # Write your code here
    pass

















def takeInput():
    #To take fast I/O
    k = int(stdin.readline().strip())
    lst = [0] * k
    for i in range(k):
        n=int(stdin.readline().strip())
        if n==0:
            lst[i] =list(int(i) for i in input().strip().split(' '))
        lst[i] =list(int(i) for i in input().strip().split(' '))
    
    return lst


# Main Code
lst = takeInput()

ans=mergeKSortedArrays(lst)
print(*ans)

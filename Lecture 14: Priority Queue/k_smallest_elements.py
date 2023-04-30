import heapq
def kSmallest(lst, k):
    ######################
    #PLEASE ADD CODE HERE#
    ######################


# Main
n=int(input())
lst=list(int(i) for i in input().strip().split(' '))
k=int(input())
ans=kSmallest(lst, k)
ans.sort()
print(*ans, sep=' ')

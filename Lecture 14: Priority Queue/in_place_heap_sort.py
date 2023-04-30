def heapSort(arr):
    ######################
    #PLEASE ADD CODE HERE#
    ######################

n = input()
arr = [int(ele) for ele in input().split()]
heapSort(arr)
for ele in arr[::-1]:
    print(ele,end=' ')

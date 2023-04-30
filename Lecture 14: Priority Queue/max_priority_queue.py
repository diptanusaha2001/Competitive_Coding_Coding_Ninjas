class PriorityQueue:
    def isEmpty(self):
        #Implement the isEmpty() function here
    
    def getSize(self):
        #Implement the getSize() function here

    def getMax(self):
        #Implement the getMax() function here
      
    def insert(self,ele,priority):
        #Implement the insert() function here
        
    def removeMax(self):
        #Implement the removeMax() function here
        
myPq = PriorityQueue()
curr_input = [int(ele) for ele in input().split()]
choice = curr_input[0]
i=1
while choice != -1:
    if choice == 1:
        element = curr_input[i]
        i+=1
        myPq.insert(element,element)
    elif choice == 2:
        print(myPq.getMax())
    elif choice == 3:
        print(myPq.removeMax())
    elif choice == 4:
        print(myPq.getSize())
    elif choice == 5:
        if myPq.isEmpty():
            print('true')
        else:
            print('false')
        break
    else:
        pass
    choice = curr_input[i]
    i+=1

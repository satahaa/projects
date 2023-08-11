def bin_search(arr , target): #Tthe akes two integers as arguements
    arr.sort() #Sort the list even if it was sorted just to be safe
    start, end = 0 , len(arr)-1 #Initialize the first and last indices
    while start <= end: #Loop untill
        mid = (start+end)//2 #Find the mid
        if arr[mid] == target:
            return mid #If target is found in the middle index return the index
        elif arr[mid] < target:
            start = mid + 1 #If the target is greater than the middle element, update the start index as the second to the middle index
        else:
            end = mid - 1 #Vice versa
    return -1 #If not found

arr = [ 2, 4, 3, 8, 5, 1]
target = int(input("Target?: "))
index = bin_search(arr, target)

if index == -1:
    print("Index not found")
else:
    print(f'The given number was found at idex {index} in the list {arr}')
def bin_search(arr , target):
    arr.sort()
    start, end = 0 , len(arr)-1
    while start <= end:
        mid = (start+end)//2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            start = mid + 1
        else:
            end = mid - 1
    return -1

arr = [ 2, 4, 3, 8, 5, 1]
target = int(input("Target?: "))
index = bin_search(arr, target)

if index == -1:
    print("Index not found")
else:
    print(f'The given number was found at idex {index} in the list {arr}')
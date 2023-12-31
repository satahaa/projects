def primeNumbers(i):
    #This is the Sieve of Erastothenes. The math behind it I still don't understand
    if i < 2:
        return []
    
    sieve = [True] * (i + 1)
    sieve[0] = sieve[1] = False
    
    for n in range(2, int(i**0.5) + 1):
        if sieve[n]:
            for multiple in range(n * n, i + 1, n):
                sieve[multiple] = False
    
    return [num for num in range(2, i + 1) if sieve[num]]

def binSearch(arr, target):
    #look at binSearch.py to understand this function.
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

while True: #Keep trying forever
    try:
        inp = int(input("Prime number range: ").strip()) #Get the prime num range
        break #Break the loop after getting input
    except ValueError: 
        print("Invalid input! Please enter an integer.") #If the value is invalid retry
pnum = primeNumbers(inp) #Run through the function to get prime nums
pnum_len = len(pnum)

def runcommands(): #A chain of command line inputs which does different things given different inputs
    inp3 = input("Run commands?(y/n) ").strip()
    if inp3 == "y":
        inp4 = input("Query or Index?(q/i/exit) ").strip().lower()
        if inp4 == "q":
            inp5 = int(input("Query? ").strip())
            ind = binSearch(pnum, inp5)
            if ind != -1:
                print(f"Number {inp5} was found at index {ind}")
                runcommands()
            else:
                print("Not found")
                runcommands()
        elif inp4 == "i":
            inp6 = int(input("Index? ").strip())
            if inp6 >= 0 and inp6 <= pnum_len - 1:
                print(f"Index {inp6} has number {pnum[inp6]}")
                runcommands()
            else:
                print(f"Sorry the list only has index from 0 to {pnum_len - 1}")
                runcommands()
        elif inp4 == "exit":
            print("Exiting...")
        else:
            print("Invalid Command.")
            runcommands()
    elif inp3 == "n":
        print("Okay, Exiting...")
    else:
        print("Invalid command. Try again")
        runcommands()        
    
print(f"There are {pnum_len} prime number in range {inp}") 
inp1 = input("Would you like to see them? (y/n) ").strip().lower() #Only show them the list if they wanted to see it.
if inp1 == "y":
    print(f"Here they are:\n{pnum}")
    runcommands()
elif inp1 == "n":
    runcommands()
else:
    print("Invalid command(s). Exiting...") 
def fizzbuzz(n):
    for i in range(n): #List numbers from 0 to n
        if i % 3 == 0 and i % 5 == 0: # If any number is divisible bt 3 and 5 print fizzbuzz
            print("FizzBuzz") 
        elif i % 3 == 0: # If any number is divisible by 3 print fizz
            print("Fizz")
        elif i % 5 == 0: # If any number is divisible by 5 print buzz
            print("Buzz")
        else: #Or just preint the number
            print(i)

def main(): #initiate main
    while True: #Keep trying forever
        try:
            i = int(input("Range? ").strip()) # Get input from user
            break #Break the loop after getting input
        except ValueError: 
            print("Invalid input! Please enter an integer.") #If the value is invalid retry
    
    fizzbuzz(i)
    x = input("Run again?(y/n) ").strip().lower() #Ask user if they want to initialise main again

    if x == "y": #If yes call main
        main()
    elif x == "n": #Or else exit
        print("Understood")
        return 0
    else:
        print("Command not understood. Quiting...")
        return 1

main() #Call main

# Test on 10,000 ints, Time : 19.01 seconds.
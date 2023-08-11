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
    i = int(input("Range? ").strip())
    fizzbuzz(i)
    

main() #Call main

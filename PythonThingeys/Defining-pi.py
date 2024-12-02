import math
n = int(input("To what value of n do you want pi to be defined? "))
total1 = 3

dec1 = input("\nDo you want to know the single value or the values of all integers below that number? ")

if(dec1 == "single"):
  for i in range(1,n):
    total1 += (-1)**(i+1) * 4/((2*i)*(2*i + 1)*(2*i + 2))
  print("\nWhen n = " + str(n) + ": " + str(total1))

if(dec1 == "all"):
  print("\n")
  for i in range(1,n+1):
    total1 += (-1)**(i+1) * 4/((2*i)*(2*i + 1)*(2*i + 2))
    print("When n = " + str(i) + ": " + str(total1))

print("\nEnd")

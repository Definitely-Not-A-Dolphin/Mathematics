import math
n = int(input("To what value of n do you want e to be defined? "))
total = 0
dec1 = input("\nDo you want to know the single value or the values of all integers below that number? ")
if(dec1 == "single"):
  for i in range(0, n + 1):
    total += (1/math.factorial(i))
  print("\nWhen n = " + str(n) + ": " + str(total))
  if(total >= 2.718281828459045):
    print("\nWait, that's illegal!")
elif(dec1 == "all"):
  sininen = 1
  print()
  while(sininen != n + 1):
    total1 = 0
    for j in range(0, sininen + 1):
      total1 += (1/math.factorial(j))
    print("When n = " + str(j) + ": " + str(total1))
    sininen += 1
  if(total1 >= 2.718281828459045):
    print("\nWait, that's illegal!")
else:
print("That's not a valid input)

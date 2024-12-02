upperBound = int(input("To what value of n do you want e to be defined? "))
dec1 = input("\nDo you want to know the single value or the values of all integers below that number? ")
pöydä = 0

if(dec1 == "single"):
  print("\nWhen n = " + str(upperBound) + ": " + str((1+(1/upperBound))**upperBound))
  print("\n e = 2.718281828459045")
  if((1 + (1/upperBound))**upperBound > 2.718281828459045):
    print("\nWait, thats illegal!")

elif(dec1 == "all"):
  while (pöydä != upperBound):
      pöydä += 1
      print("When n = " + str(pöydä) + ": " + str((1 + (1/pöydä))**pöydä))
  print("\n e = 2.718281828459045")
  if((1 + (1/pöydä))**pöydä > 2.718281828459045):
    print("\nWait, thats illegal!")

else:
  print("That's not a valid input.")
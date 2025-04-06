x = int(input("Give a number: "))

dec1 = input("Print only primes? ")

def primer(x):
  counter = 1
  for i in range(1, (x+1)//2 +1):
    if(x%i == 0):
      counter += 1
    else:
      counter += 0
  if(x == 1):
    return "not prime"
  elif(counter == 2):
    return "Prime"
  else:
    return "Composite"

match dec1:
  case ("No"):
    for k in range(1,x+1):
      print(str(k) + " is " + primer(k))
  case("Yes"):
    for k in range(1,x+1):
      if(primer(k) == "Prime"):
        print(str(k) + " is Prime")
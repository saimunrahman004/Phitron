age = 20

if age >= 18:
    print("You are eligible to vote.")
else:
    print("You are not old enough to vote.")


x = 41

if x > 10:
  print("Above ten,")
  if x > 20:
    print("and also above 20!")
  else:
    print("but not above 20.")


num = 1
while num <= 10:
   print (num)
   num += 1
   if num == 5 :
    break

num = 1
while num <= 10:
    num += 1
    if num == 5 :
       continue
    print (num)
  
   
num = 0
while num <= 10:
    num += 1
    if num % 2== 1 :
       continue
    print (num)
  
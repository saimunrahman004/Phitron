numbers = [12,45,98,68]
numbers.append(56)
print(numbers)

numbers.insert(2,71)
print(numbers)

numbers.remove(98)
print(numbers)

if 45 in numbers:
    numbers.remove(45)
if 8 in numbers:
    numbers.remove(8)

print(numbers)

last = numbers.pop()
print(last,numbers)

index = numbers.index(71)
print(index)

sorted = numbers.sort()
print(sorted)

numbers.reverse()
print(numbers)

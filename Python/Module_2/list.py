# list , array , collection of same (simple terms)

#index :   0   1   2   3   4    5   6   7   8   9
numbers = [45, 56, 12, 89, 87, 32, 89, 59, 46, 96 ]
# index :  -10 -9 -8  -7  -6  -5  -4  -3  -2  -1

print(numbers[3],numbers[-3])

# list(start : end)  it stops before end index
print(numbers[2:6])
print(numbers[1:7])


print(numbers[1:7:1])
print(numbers[1:7:2])
print(numbers[7:1:-1])
print(numbers[7:2:-2])

print(numbers[4:])
print(numbers[:5])
print(numbers[:])#copy a list
print(numbers[::-1]) # reverse list


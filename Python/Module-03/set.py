# list -->[]
# touple -->()
# set -->{}
# set : unique collection of items
numbers = {12,56,98,78,12,6,98}
print(numbers)

numbers_set = set(numbers)
print(numbers_set)
numbers_set.add(55)
print(numbers_set)
numbers_set.remove(98)
print(numbers_set)



A = {2, 3, 5}
B = {1, 3, 5}

# compute intersection between A and B
print(A.intersection(B)) # (a& b)


# Output: {3, 5}

A = {1, 2, 3}
B = {1, 2, 3, 4, 5}

# all items of A are present in B
print(A.issubset(B))

# Output: True

A = {1, 2, 3, }
B = {4, 5, 6}

# checks if set A and set B are disjoint
print(A.isdisjoint(B))

# Output: True



A = {2, 3, 5}
B = {1, 3, 5}

# compute union between A and B
print('A U B = ', A.union(B))


# Output: A U B =  {1, 2, 3, 5}
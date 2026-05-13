def add(a, b=5, c=10):
    return a + b + c

print(add(2, 3, 4))   # সব value দেওয়া
print(add(2, 3))      # c default (10)
print(add(2))         # b=5, c=10 default

#2

def sum(*args):
    sum = 0
    for num in args:
        sum = sum + num
    return sum

print(sum(2, 3))
print(sum(1, 2, 3, 4))

#3.
def all_sum(n1,n2,*num):
    print(num)
    sum = 0
    for i in num:
        print(i)
        sum = sum + i
    return sum

total = all_sum(45,66,58,66,74)
print("all sum :",total)

# যদি সবগুলা (n1, n2 সহ) যোগ করতে চাও:

def all_sum(n1,n2,*num):
    sum = n1 + n2
    for n in num:
        sum += n
    return sum
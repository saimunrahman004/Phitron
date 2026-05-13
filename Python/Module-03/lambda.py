# def double(x):
#     return x * 2

double = lambda x: x * 2
squared = lambda x: x * x 
result = double(44)
output = squared(9)
# print(result,output)

add = lambda x , y : x + y
sum = add(10, 20)
print(sum)

numbers = [12,56,98,78,12,6,98]
double_numbers = (map(lambda x: x * 2, numbers))
squared_numbers = (map(lambda x: x * x, numbers))
print(list(double_numbers))
print(list(squared_numbers))

actor = [
    {'name': 'Brad Pitt', 'age': 57},
    {'name': 'Leonardo DiCaprio', 'age': 46},
    {'name': 'Scarlett Johansson', 'age': 36},
    {'name': 'Tom Hanks', 'age': 32}
]
junior_actors = filter(lambda actor: actor['age'] < 40, actor)
print(list(junior_actors))  
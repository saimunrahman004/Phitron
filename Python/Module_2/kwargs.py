def student_info(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

student_info(name="Saimun", age=21, dept="CSE")

# 2
def full_name(first,last):
    name = f'{first} {last}'
    return name
name = full_name('alu','kodu')
print(name)
    
#3
def famous_name(first,last,**kwargs):
    name = f'{first} {last}'
    #print(kwargs['title'])
    for key, value in kwargs.items():
        print(key, ":", value)

    return name
name = famous_name(first='Taher',last = 'khan',title = 'Hujur',additional='khomini')
print(name)




#🧠 Practice Task 1 (Easy)

# একটা program লেখো যেটা user এর নাম নিয়ে print করবে:

#🎯 Output example:
# Hello, my name is Saimun
#  name=input("enter your name :")
# print(f'my name is {name}')


    
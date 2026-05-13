name = 'Sakib khan'
name2 = "sakib khan"
name3 = """
            sakib khan
            number one 
            """

print(name)
print(name2)
print(name3)


# string is a sequence of characters. it is a data type in python.
#  it is used to store text data. it is enclosed in single quotes, double quotes or triple quotes. 
# it can be accessed using indexing and slicing. 
# it is immutable, which means that once a string is created, it cannot be changed.

sentence = "i love PYTHON"

# converts first character to uppercase and others to lowercase
capitalized_string = sentence.capitalize()

print(capitalized_string)

# Output: I love python

#replace()
txt = "I like apples"
print(txt.replace("apples", "mangoes"))

txt2 = "one one one"
print(txt2.replace("one", "two", 2))

# format()
name = "Saimun"
age = 20

txt = "My name is {} and I am {} years old."
print(txt.format(name, age))

txt = "My name is {name}"
print(txt.format(name="Saimun"))
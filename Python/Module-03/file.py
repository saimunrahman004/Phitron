 # csv = comma separated values
# .txt = text file

# with open("data.txt", "w") as file:
#     file.write("Hello, this is a text file.")

# with open("data.txt", "a") as file:
#     file.write("Hello, this is a text file.")

with open("data.txt", "r") as file:
    content = file.read()
    print(content)
def multiple ():
    return 3,4
# print(multiple())
things = 'pen','tripod','water_bottle'
print(things)
print(things[0])
print(things[-2])
print(things[3:6])

if 'pen' in things:
    print('pen is in the things')

for item in things:
    print(item)
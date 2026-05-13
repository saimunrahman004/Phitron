balance = 1000

def buy_thing(item,price):
    dream_phone = 'Iphone'
    global balance
    print(f'previous balance value',balance)
    balance = balance - price
    print(f'balance after buying {item}',balance)

buy_thing('sunglass',1000)
print('global balance after buy',balance)


code, unit, price = input().split()
code = int(code)
unit = int(unit)
price = float(price)

toBePaid = price * unit;

code, unit, price = input().split()
code = int(code)
unit = int(unit)
price = float(price)

toBePaid += (price * unit);

print(f"VALOR A PAGAR: R$ {toBePaid:.2f}")
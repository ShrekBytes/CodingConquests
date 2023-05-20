oSalary = float(input())

if 0 <= oSalary <= 400:
    rate = 15
elif 400.01 <= oSalary <= 800:
    rate = 12
elif 800.01 <= oSalary <= 1200:
    rate = 10
elif 1200.01 <= oSalary <= 2000:
    rate = 7
elif oSalary > 2000:
    rate = 4
else:
    rate = 0

nSalary = oSalary + ((oSalary * rate) / 100)
mEarned = nSalary - oSalary

print(f"Novo salario: {nSalary:.2f}")
print(f"Reajuste ganho: {mEarned:.2f}")
print("Em percentual:", rate, "%")

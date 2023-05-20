N = float(input())
I = int(N * 100)

n100 = I // 10000
I = I % 10000
n50 = I // 5000
I = I % 5000
n20 = I // 2000
I = I % 2000
n10 = I // 1000
I = I % 1000
n5 = I // 500
I = I % 500
n2 = I // 200
I = I % 200

c100 = I // 100
I = I % 100
c50 = I // 50
I = I % 50
c25 = I // 25
I = I % 25
c10 = I // 10
I = I % 10
c5 = I // 5
I = I % 5
c1 = I // 1
I = I % 1

print("NOTAS:")
print(n100, "nota(s) de R$ 100.00")
print(n50, "nota(s) de R$ 50.00")
print(n20, "nota(s) de R$ 20.00")
print(n10, "nota(s) de R$ 10.00")
print(n5, "nota(s) de R$ 5.00")
print(n2, "nota(s) de R$ 2.00")

print("MOEDAS:")
print(c100, "moeda(s) de R$ 1.00")
print(c50, "moeda(s) de R$ 0.50")
print(c25, "moeda(s) de R$ 0.25")
print(c10, "moeda(s) de R$ 0.10")
print(c5, "moeda(s) de R$ 0.05")
print(c1, "moeda(s) de R$ 0.01")
def Sum(n):
    sum = (n * (n + 1)) // 2
    return sum


fNum, tNum = map(int, input().split())
rSum = Sum(tNum) - Sum(fNum - 1)

print(rSum)
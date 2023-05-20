a, b, c = map(int, input().split())
nums = sorted([a, b, c])

print(*nums, sep='\n')
print()
print(a, b, c, sep='\n')
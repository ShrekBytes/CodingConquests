import datetime

input_str = input().split()
fDay = int(input_str[1])
fHour, fMinute, fSecond = map(int, input().split(':'))

input_str = input().split()
tDay = int(input_str[1])
tHour, tMinute, tSecond = map(int, input().split(':'))

startTime = datetime.datetime(1, 1, fDay, fHour, fMinute, fSecond)
endTime = datetime.datetime(1, 1, tDay, tHour, tMinute, tSecond)
time = endTime - startTime

print(f"{time.days} dia(s)")
print(f"{time.seconds // 3600} hora(s)")
print(f"{(time.seconds % 3600) // 60} minuto(s)")
print(f"{time.seconds % 60} segundo(s)")

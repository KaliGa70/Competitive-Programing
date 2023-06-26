bacteria = int(input())
tmp = 0

while bacteria:
    q = bacteria % 2
    if q == 1:
        tmp += 1
    bacteria //= 2

print(tmp)

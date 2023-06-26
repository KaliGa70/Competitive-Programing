n, k = map(int, input().split())

elemento = list()

entrada = map(int, input().split())

for i in entrada:
    
    elemento.append(i);

elemento = sorted(elemento)

divEntera = elemento[n//2]

tmp = 1

for i in range(1, (n//2) + 1):
    if((elemento[n//2 + i] * i) - divEntera) > k:
        break
    divEntera += elemento[n//2 + i]
    tmp += 1

print(int((k+divEntera) / tmp))

    
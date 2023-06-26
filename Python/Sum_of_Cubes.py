arreglo = {i**3 for i in range(1, 10001)}

for i in range(int(input())):

    x = int(input()); noEsta = 0

    for a in arreglo:
        if(x-a in arreglo):
            print("YES")
            noEsta = 1
            break
    if (noEsta == 0):
        print("NO")

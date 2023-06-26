from collections import Counter

def Good_Sequence(x):
    counts = Counter(x)  # Cuenta los elementos en la lista x
    remv = 0
    for num, freq in counts.items():
        if freq > num:
            remv += freq - num
        elif freq < num:
            remv += freq
    return remv

x = int(input())
y = list(map(int, input().split()))

save = Good_Sequence(y)
print(save)

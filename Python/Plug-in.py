s=[]
for c in input():
    if s and c==s[-1]:s.pop()
    else:s+=[c]
print(''.join(s))

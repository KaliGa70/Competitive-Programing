n=2**20
arr=[1]*n
b={4}
for i in range(2,n):
    if arr[i]:
        for j in range(i*i,n,i):
            arr[j]=0
        b.add(i*i)
input()
for d in map(int,input().split()):
    print (['NO','YES'][d in b])
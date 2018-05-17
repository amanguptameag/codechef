import numpy

n,q=map(int,input().split())
a=list(map(int,input().split()))
arr=[a[0]]

for i in range(1,n):
    arr.append(arr[-1]^a[i])

arr=numpy.array(arr)

for _ in range(q):
    t,i,k=map(int,input().split())

    if t==1:
        b=a[i-1]^k
        a[i-1]=k
        arr[i-1:]^=b

    else:
        print(numpy.count_nonzero(arr[:i]==k)) 

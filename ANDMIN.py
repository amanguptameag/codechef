import numpy

n,q=map(int,input().split())
a=list(map(int,input().split()))
a=numpy.array(a)

for _ in range(q):
    aa=list(map(int,input().split()))

    if aa[0]==1:
        a[aa[1]-1:aa[2]]&=aa[3]
    else:
        print(numpy.amin(a[aa[1]-1:aa[2]]))

 

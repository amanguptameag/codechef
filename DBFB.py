mod=1000000007

for _ in range(int(input())):
    m,n=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))

    aa=sum(a)%mod
    aa=(aa*m)%mod
    bb=sum(b[:m])%mod
    bb=(bb*m)%mod

    arr=[aa,bb]

    for i in range(n-2):
        p=(arr[-1]+arr[-2])%mod
        arr.append(p)

    print(arr[-1])

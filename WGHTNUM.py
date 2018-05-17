mod=1000000007

def power(x, y, p) :
    res = 1
    x = x % p
    while (y > 0) :
        if ((y & 1) == 1) :
            res = (res * x) % p
        y = y >> 1
        x = (x * x) % p

    return res

for _ in range(int(input())):
    n,w=map(int,input().split())
    if w>8 or w<-9:
        print(0)
    else:
        if w>=0:
            m=9-w
        else:
            m=10-abs(w)

        ans=power(10,n-2,mod)
        ans%=mod
        ans*=m
        ans%=mod
        print(ans)

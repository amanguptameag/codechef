import random
n,m,k=map(int,input().split())
a=list(map(int,input().split()))
p=list(map(int,input().split()))
ans=[]
ansl=[]

for j in range(268):
    aa=[]
    mul=1
    for i in range(n):
        aaa=a[i]+random.randint(1,k)
        aa.append(aaa)
        mul*=aaa

    ss=0
    for i in range(m):
        ss+=mul%p[i]

    ansl.append(ss//m)
    ans.append(aa)

print(*ans[ansl.index(max(ansl))])   

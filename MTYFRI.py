for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    m=[]
    t=[]
    ans=0

    for i in range(n):
        if i%2==0:
            m.append(a[i])
        else:
            t.append(a[i])

    m.sort()
    t.sort()
    mm=sum(m)
    tt=sum(t)
    if tt>mm:
        ans+=1

    for i in range(k):
        if len(m)==0 or len(t)==0:
            break
        p=m.pop(-1)
        q=t.pop(0)
        if p>q:
            mm+=q-p
            tt+=p-q
        else:
            break
        if tt>mm:
            ans+=1
            break

    if ans==0:
        print('NO')
    else:
        print('YES')

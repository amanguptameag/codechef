for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    s=list(set(a))
    s.sort()
    m=len(s)
    l=[0]*m
    l[0]=1
    j=0
    for i in range(1,n):
        if a[i]==s[j]:
            l[j]+=1
        else:
            j+=1
            l[j]+=1

    b=[0]*100005
    ans=0
    o=[]
    e=[]
    ol=[]
    el=[]
    for i in range(m):
        b[s[i]]=1

        if s[i]%2==0:
            e.append(s[i])
            el.append(l[i])
        else:
            o.append(s[i])
            ol.append(l[i])

    if len(e)!=0:
        for i in range(len(e)-1):
            for j in range(i+1,len(e)):
                m=(e[i]+e[j])//2
                if b[m]==1:
                    ans+=el[i]*el[j]
            if el[i]>1:
                p=el[i]
                ans+=(p*(p-1))//2
    if len(e)!=0:
        if el[-1]>1:
            p=el[-1]
            ans+=(p*(p-1))//2

    if len(o)!=0:
        for i in range(len(o)-1):
            for j in range(i+1,len(o)):
                m=(o[i]+o[j])//2
                if b[m]==1:
                    ans+=ol[i]*ol[j]
            if ol[i]>1:
                p=ol[i]
                ans+=(p*(p-1))//2
    if len(o)!=0:
        if ol[-1]>1:
            p=ol[-1]
            ans+=(p*(p-1))//2

    print(ans)

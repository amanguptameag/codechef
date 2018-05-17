for _ in range(int(input())):
    n,s,yy=map(int,input().split())
    v=list(map(int,input().split()))
    d=list(map(int,input().split()))
    y=list(map(int,input().split()))
    l=list(map(int,input().split()))

    t=yy/s
    ans=0

    for i in range(n):
        if d[i]==1:
            dis=v[i]*ans
            y[i]+=dis
            start=y[i]
            last=y[i]-l[i]

            if last>=0:
                ans+=t
            else:
                if start>0:
                    dd=abs(last)
                    ans+=dd/v[i]
                    ans+=t
                elif start>=-0.000001:
                    ans+=l[i]/v[i]
                    ans+=t
                else:
                    df=abs(start)-0.000001
                    tf=df/v[i]
                    dl=abs(last)
                    tl=dl/v[i]
                    if tf>t:
                        ans+=t
                    else:
                        ans+=tl
                        ans+=t
        else:
            dis=v[i]*ans
            y[i]-=dis
            start=y[i]
            last=y[i]+l[i]

            if last<=0:
                ans+=t
            else:
                if start<0:
                    dd=last
                    ans+=dd/v[i]
                    ans+=t
                elif start<=0.000001:
                    ans+=l[i]/v[i]
                    ans+=t
                else:
                    df=start-0.000001
                    tf=df/v[i]
                    dl=last
                    tl=dl/v[i]
                    if tf>t:
                        ans+=t
                    else:
                        ans+=tl
                        ans+=t

    print(ans)

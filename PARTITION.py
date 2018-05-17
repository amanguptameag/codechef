for _ in range(int(input())):
    x,n=map(int,input().split())
    a=[-1]*(n+1)
    a[x]=2

    h=(n*(n+1)//2)-x
    if h%2!=0:
        print("impossible")
    else:
        h=h//2
        m=h
        for i in range(n,0,-1):
            if i<=m and a[i]==-1:
                a[i]=1
                m-=i

            if m==0:
                break

        if m==0:
            for i in range(1,n+1):
                if a[i]==-1:
                    print(0,end='')
                else:
                    print(a[i],end='')
            print()
        else:
            m=h
            a=[-1]*(n+1)
            a[x]=2

            for i in range(n-1,0,-1):
                if i<=m and a[i]==-1:
                    a[i]=1
                    m-=i

                if m==0:
                    break

            if m==0:
                for i in range(1,n+1):
                    if a[i]==-1:
                        print(0,end='')
                    else:
                        print(a[i],end='')
                print()
            else:
                print("impossible")

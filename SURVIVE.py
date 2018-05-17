for _ in range(int(input())):
    n,k,s=map(int,input().split())
    w=s//7

    if k>n:
        print(-1)
        continue

    if w>0:
        if k*7>6*n:
            print(-1)
        else:
            r=k*s
            if r%n==0:
                print(r//n)
            else:
                print(r//n+1)
    else:
        if k>n:
            print(-1)
        else:
            t=s*k
            if t%n==0:
                print(t//n)
            else:
                print(t//n+1)

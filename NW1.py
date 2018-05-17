for _ in range(int(input())):
    b=list(input().split())
    n=int(b[0])
    d=b[1]
    a=[4]*7

    if d=='mon':
        s=0
    elif d=="tues":
        s=1
    elif d=="wed":
        s=2
    elif d=="thurs":
        s=3
    elif d=="fri":
        s=4
    elif d=="sat":
        s=5
    else:
        s=6

    if n==28:
        print(*a)
    elif n==29:
        a[s]+=1
        print(*a)
    elif n==30:
        if s<=5:
            a[s]+=1
            a[s+1]+=1
        else:
            a[s]+=1
            a[0]+=1
        print(*a)
    else:
        if s<=4:
            a[s]+=1
            a[s+1]+=1
            a[s+2]+=1
        elif s==5:
            a[5]+=1
            a[6]+=1
            a[0]+=1
        else:
            a[6]+=1
            a[0]+=1
            a[1]+=1
        print(*a)

for _ in range(int(input())):
    s,n=input().split()
    n=int(n)
    a,b=0,0
    ans=0
    arr=[]

    for i in s:
        if i=='a':
            a+=1
        else:
            b+=1

        if a>b:
            ans+=1

    arr.append(ans)
    nn=1

    if n==1:
        print(ans)
    else:
        for k in range(len(s)):
            nn+=1
            m=0
            for i in s:
                if i=='a':
                    a+=1
                else:
                    b+=1

                if a>b:
                    m+=1

            arr.append(m)
            if n==nn:
                print(sum(arr))
                break
            elif arr[-1]==arr[-2]:
                p=n-len(arr)
                print(p*arr[-1]+sum(arr))
                break

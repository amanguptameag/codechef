for _ in range(int(input())):
    s=input()
    l=len(s)
    x,y=map(int,input().split())
    a=[]

    m=s.count('a',0,l)
    n=s.count('b',0,l)

    if m>n:
        d=m//x
        if d<n:
            p=0
            while(True):
                if m==0 and n==0:
                    break

                if m==n:
                    a.append('ba')
                    m-=1
                    n-=1
                else:
                    if p==x:
                        a.append('b')
                        n-=1
                        p=0
                    else:
                        a.append('a')
                        m-=1
                        p+=1

        elif d==n:
            while(True):
                if m==0 and n==0:
                    break

                if m>=x:
                    for i in range(x):
                        a.append('a')
                    m-=x
                else:
                    for i in range(m):
                        a.append('a')
                    m=0

                if n!=0:
                    a.append('b')
                    n-=1

        else:
            while(True):
                if m==0 and n==0:
                    break

                if m>=x:
                    for i in range(x):
                        a.append('a')
                    m-=x
                else:
                    for i in range(m):
                        a.append('a')
                    m=0

                if n!=0:
                    a.append('b')
                    n-=1
                elif m==0:
                    continue
                else:
                    a.append('*')


    elif m==n:
        while(True):
            if m==0:
                break

            if m>=1:
                a.append('ab')
                m-=1

    else:
        d=n//y
        if d<m:
            p=0
            while(True):
                if m==0 and n==0:
                    break

                if m==n:
                    a.append('ab')
                    m-=1
                    n-=1
                else:
                    if p==y:
                        a.append('a')
                        m-=1
                        p=0
                    else:
                        a.append('b')
                        n-=1
                        p+=1

        elif d==m:
            while(True):
                if m==0 and n==0:
                    break

                if n>=y:
                    for i in range(y):
                        a.append('b')
                    n-=y
                else:
                    for i in range(n):
                        a.append('b')
                    n=0

                if m!=0:
                    a.append('a')
                    m-=1

        else:
            while(True):
                if m==0 and n==0:
                    break

                if n>=y:
                    for i in range(y):
                        a.append('b')
                    n-=y
                else:
                    for i in range(n):
                        a.append('b')
                    n=0

                if m!=0:
                    a.append('a')
                    m-=1
                elif n==0:
                    continue
                else:
                    a.append('*')


    print(''.join(a))
 

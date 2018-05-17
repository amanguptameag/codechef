for _ in range(int(input())):
    n,q=map(int,input().split())

    arr=[]
    a=[-1]*(n+1)
    b=[]
    a[1]=0
    ans=0

    for _ in range(q):
        x,y,z=map(int,input().split())

        if x==y:
            if z!=0:
                ans+=1
        else:
            arr.append([min(x,y),max(x,y),z])

    arr.sort()

    for i in arr:
        if a[i[0]]!=-1 and a[i[1]]!=-1:
            if abs(a[i[0]]-a[i[1]])==i[2]:
                continue
            else:
                ans+=1
                break

        elif a[i[0]]!=-1 and a[i[1]]==-1:
            if i[2]==0:
                a[i[1]]=a[i[0]]
            elif i[2]==1:
                if a[i[0]]==0:
                    a[i[1]]=1
                elif a[i[0]]==1:
                    a[i[1]]=0

        elif a[i[0]]==-1 and a[i[1]]!=-1:
            if i[2]==0:
                a[i[0]]=a[i[1]]
            elif i[2]==1:
                if a[i[1]]==0:
                    a[i[1]]=0
                elif a[i[1]]==1:
                    a[i[1]]=1

        else:
            b.append(i)

    if ans==0:
        for i in b:
            if a[i[0]]!=-1 and a[i[1]]!=-1:
                if abs(a[i[0]]-a[i[1]])==i[2]:
                    continue
                else:
                    ans+=1
                    break

            elif a[i[0]]!=-1 and a[i[1]]==-1:
                if i[2]==0:
                    a[i[1]]=a[i[0]]
                elif i[2]==1:
                    if a[i[0]]==0:
                        a[i[1]]=1
                    elif a[i[0]]==1:
                        a[i[1]]=0

            elif a[i[0]]==-1 and a[i[1]]!=-1:
                if i[2]==0:
                    a[i[0]]=a[i[1]]
                elif i[2]==1:
                    if a[i[1]]==0:
                        a[i[1]]=0
                    elif a[i[1]]==1:
                        a[i[1]]=1

            else:
                if i[2]==0:
                    a[i[0]]=0
                    a[i[1]]=0
                elif i[2]==1:
                    a[i[1]]=0
                    a[i[1]]=1


    if ans==0:
        print("yes")
    else:
        print("no")

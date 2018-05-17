a=[]
ans=0
for _ in range(int(input())):
    s,v=map(int,input().split())
    if len(a)==0:
        a.append([s,v])
    else:
        if a[-1][0]>s or a[-1][1]>v:
            ans+=1
        else:
            a.append([s,v])

if a[-1][1]>10:
    ans+=1

if len(a)>=2:
    if a[-1][1]==a[-2][1]:
        ans+=1

if ans>0:
    print("NO")
else:
    print("YES")
 

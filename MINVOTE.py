for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    ans=[0]*n

    for i in range(n-1):
    	s=0
    	for j in range(i+1,n):
            if s<=a[i]:
                ans[j]+=1
            else:
                break

            s+=a[j]

    for i in range(n-1,-1,-1):
        s=0
        for j in range(i-1,-1,-1):
            if s<=a[i]:
                ans[j]+=1
            else:
                break

            s+=a[j]

    print(*ans) 

def maxSubArraySum(a,size):
    max_so_far =a[0]
    curr_max = a[0]
    for i in range(1,size):
        curr_max = max(a[i], curr_max + a[i])
        max_so_far = max(max_so_far,curr_max)
    return max_so_far

for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))

    s=sum(a)
    if k==1:
        print(maxSubArraySum(a,n))
    elif k==2:
        p=maxSubArraySum(2*a,2*n)
        print(max(s*k,p))
    else:
        p=maxSubArraySum(2*a,2*n)
        p1=maxSubArraySum(3*a,3*n)
        if p1>p:
            d=p1-p
            p=p+d*(k-2)
        print(max(s*k,p))

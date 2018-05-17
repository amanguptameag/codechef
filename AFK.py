for _ in range(int(input())):
	a=list(map(int,input().split()))

	x=a[1]-a[0]
	y=a[2]-a[1]
	m=(a[0]+a[2])//2
	ans=0

	if x==y:
		print(ans)
	elif x>y:
		m+=1
		ans=abs(m-a[1])
		a[1]=m
		x=a[1]-a[0]
		y=a[2]-a[1]

		if x==y:
			print(ans)
		else:
			print(ans+1)
	else:
		ans=abs(m-a[1])
		a[1]=m
		x=a[1]-a[0]
		y=a[2]-a[1]

		if x==y:
			print(ans)
		else:
			print(ans+1)

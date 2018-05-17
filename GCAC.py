for t in range(int(input())):
	n,m=map(int,input().split())
	a=list(map(int,input().split()))
	b=[]

	for i in range(m):
		bb=list(map(int,input().split()))
		b.append(bb)

	c=[]
	for i in range(n):
		cc=list(input())
		c.append(cc)

	#print(a)
	#print(b)
	#print(c)

	candidate=0
	amount=0
	company=set([])

	for j in range(n):
		getmax=0
		index=-1
		get=0

		#print(index)
		#print(c[j])
		#print(a[j])

		for i in range(m):

			if c[j][i]=='1' and b[i][1]!=0 and b[i][0]>=a[j]:

				if b[i][0]>getmax:
					get+=1
					getmax=b[i][0]
					b[i][1]-=1

					if get>1:
						b[index][1]+=1

					index=i
			#print(index)
			#print(b)

		if get!=0:
			candidate+=1
			amount+=b[index][0]
			company.add(index)
		#print(index)
		#print(company)
		#print()

	print(candidate,amount,m-len(company))
 

for t in range(int(input())):
	s=list(input())
	t=list(input())
	s.sort()
	t.sort()

	arr=list(set(s).intersection(t))
	#print(arr)

	c=s
	for i in arr:
		c=list(filter(lambda a:a!=i, c))
	#print(c)

	nc=s
	cc=list(set(c))
	for i in cc:
		nc=list(filter(lambda a:a!=i, nc))
	#print(nc)

	tc=t
	for i in arr:
		tc=list(filter(lambda a:a!=i, tc))
	#print(tc)

	ccount=1
	if len(nc)!=0:
		let=nc[0]
		for i in range(1,len(nc)):
			if nc[i]==let:
				ccount+=1
				break
			else:
				let=nc[i]
	#print(ccount)

	ncount=1
	if len(c)!=0:
		let=c[0]
		for i in range(1,len(c)):
			if c[i]==let:
				ncount+=1
				break
			else:
				let=c[i]
	#print(ncount)

	tncount=1
	if len(tc)!=0:
		let=tc[0]
		for i in range(1,len(tc)):
			if tc[i]==let:
				tncount+=1
				break
			else:
				let=tc[i]
	#print(tncount)

	if len(tc)==0 and len(c)!=0:
		print("A")
	elif len(c)!=0 and ncount>1:
		print("A")
	else:
		print("B")
 

for _ in range(int(input())):
	a=list(input())

	s=list('ABCDEFGHIJKLMNOPQRSTUVWXYZ')
	ans=[]

	for i in s:
		r=list(str(ord(i)))

		if r[0]==r[1]:
			if a.count(r[0])>1:
				ans.append(i)
		else:
			if a.count(r[0])>0 and a.count(r[1])>0:
				ans.append(i)

	for i in ans:
		print(i,end='')
	print()

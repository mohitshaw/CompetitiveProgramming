while 1:
	n,x,d=raw_input().partition(' ')
	if n=="0" and d=="0":
		break
	else:
		print (int(n)**int(d)) 

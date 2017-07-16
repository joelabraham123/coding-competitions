t = int(input()); 
for i in range(1,t+1): 
	n = int(input());  
	for j in range(n,0,-1):
		if(j<10):
			tidy = j;
		elif j%10 is 0 :
			continue;
		else:
			num = j;
			while num is not 0 :
				m=num/10;
				if(num%10>=m%10):   				
					num = num / 10;
					continue;
				else:
					break;
			if num is 0:
				tidy = j;
			else:
				continue;
		if tidy is not -1 :
			break;
	print("Case #",i,": ",tidy);

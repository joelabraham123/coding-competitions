#include <stdio.h> 
void main() {
	int i,t,n,k,max,min;
	scanf("%d",&t); 
	for (i = 1; i <= t; ++i) {
    scanf("%d %d",&n,&k);  
	if(n==k)
	{
		printf("Case #%d: 0 0\n",i);
		continue;
	}	
	while(k!=0)
	{
		if(n%2==0)
		{
			max = n/2;
			min = max - 1;
		}	
		else
		{
			max = min = (n-1)/2;
			
		}		
		n = n/2;
		k--;	
	}
	printf("Case #%d: %d %d\n",i,max,min);
}
}

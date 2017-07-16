#include <stdio.h> 
void main() {
	unsigned long long int i,t,n,tidy=-1,j,num,m;
	scanf("%lld",&t);  
	for (i = 1; i <= t; ++i) {
    scanf("%lld",&n); 
    for(j=n;j>=1;--j)
    {
    	if(j<10)
    		tidy = j;
    	else if(j%10==0)
    		continue;
    	else
    	{
    		num = j;
    		while(num!=0)
    		{
    			
    			m=num/10;
    			if(num%10>=m%10)
    			{   				
    				num = num / 10;
    				continue;
				}
				else
					break;
			}
			if (num == 0)
				tidy = j;
			else 
				continue;
		}
		if(tidy!=-1)
			break;
	}
	printf("Case #%lld: %lld\n",i,tidy);
}
}

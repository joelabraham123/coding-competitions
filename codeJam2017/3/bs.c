#include <stdio.h> 
void main() {
	int i,t,n,k,max,min,arr[1000],l=0,large,temp,j;
	for(j=0;j<1000;j++)
		arr[j] = 0;
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
			max = (n-1)/2;	
			min = (n-1)/2;		
		}
		arr[l] = max;
		arr[l++] = min;
		l++;
		large = arr[0];
		for(j=1;j<=1000;j++)
		{
			if(arr[j]>large)
			{
				large = arr[j];	
				arr[j]=0;
			}	
		}
		n=large;
		k--;	
		
	}
	printf("Case #%d: %d %d\n",i,max,min);
}
}

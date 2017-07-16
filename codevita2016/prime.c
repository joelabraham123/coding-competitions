# include<stdio.h>
# include<math.h>
int main()
{
	long int k=1,i,j,l,m=8;
	long int prime_no[10][10000];
	long int prime[10000]={2,3,5,7,11,13,17,19,23};
	for(i=0;i<10;i++)
	{
		for(j=0;j<10000;j++)
		{
			prime_no[i][j]=k++;
		}
		
	}
	
		for(i=0;i<10;i++)
	{
		for(j=0;j<10000;j++)
		{
			if((i+1)%2==0 || (i+1)%5==0)
			continue;
			for(l=0;l<sqrt(prime_no[i][j]);l++)
			{
				if(prime_no[i][j]!=prime[l] && prime_no[i][j]%prime[l]==0)
				continue;
				
				
			}
		}
		
	}
	
	
}

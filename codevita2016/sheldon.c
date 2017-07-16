#include<stdio.h>
void main()
{
	int a[50][50],n,i,req,j,flag=0;
	printf("no. of beverages : ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[j][i]=a[j+1][i-1];
		}
		a[n-1][i]=a[0][i-1];
	}		
	printf("required :");
	scanf("%d",&req);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-1;j++)
		{
			if(a[i][0]+a[i][j]+a[i][j+1]==req)
			flag=1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=2;j<n-2;j+=2)
		{
			if(a[i][0]+a[i][j]+a[i][j+2]==req)
			flag=1;
		}
	}
	if (flag==1)
	printf("True");
	else 
	printf("False");
}

#include<stdio.h>
int main()
{
	int n,i,j;
	char a[52][52];
	scanf("%d",&n);
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<2*n+1;j++)
		{
			a[i][j]='*';
		}
	}
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<2*n+1;j++)
		{
			if((i%2!=0)&&(j%2!=0))
				a[i][j]=' ';
			if(((i%2==0)&&(j%2!=0))&&(j>i))
				a[i][j]=' ';
			if(((i%2!=0)&&(j%2==0))&&(i>j))
				a[i][j]=' ';
			if((i==0)||(j==0))
				a[i][j]='*';
		}
	}
	for(i=0;i<2*n+1;i++)
	{
		for(j=0;j<2*n+1;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
	return (0);
}

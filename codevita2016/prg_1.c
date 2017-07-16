#include<stdio.h>
#include<string.h>
int a[52][52];
void horizontal(int row_no,int col_no,int num);
void vertical(int row_no,int col_no,int num);
void main()
{
	int i,j,k,n,m;
	scanf("%d",&n);
	m=(2*n)+1;
	horizontal(0,m,m);
	vertical(m,0,m);
	while(m>=3)
	{
		horizontal(m,m,m);
		vertical(m,m,m);
			m=m-2;
	}
	
	for(i=0;i<m;i++)
	for(j=0;j<m;j++)
	printf("%c",a[i][j]);
}


void horizontal(int row_no,int col_no,int num)
{
	int i;
	for(i=0;i<col_no;i++)
	{
		a[row_no][i]=1;
	}
}
void vertical(int row_no,int col_no,int num)
{
	int i;
	for(i=0;i<row_no;i++)
	{
		a[i][col_no]=1;
	}
}

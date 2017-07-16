#include<stdio.h>
void main()
{
	float m,time,k=0,i,rate;
	int amt;
	printf("enter m,t,r :");
	scanf("%f %f %f",&m,&time,&rate);
	k=k+m;
	for(i=1;i<=time;i++)
	{
		amt=(1200*k)/(1200+rate);
		k=m+amt;
	}
	printf("amt to be deposited : %d",amt);
}

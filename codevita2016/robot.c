#include<stdio.h>
void main()
{
	int f,b,t,fd,bd,i=0,count=0,flag=0;
	printf("enter f,b,t,fd,bd :");
	scanf("%d %d %d %d %d",&f,&b,&t,&fd,&bd);
	if((f==b)&&(f<fd))
	printf("No Ditch");
	else
	{
	while(flag==0)
{
	if((i+f)<fd)
	{
		i=i+f;
		count=count+f;
	}
	else
	{
		count=count+(fd-i);
		printf("robot will fall in %d F",(count*t));
		break;
	}
	if((i-b)>-bd)
	{
		i=i-b;
		count=count+b;
	}
	else
	{
		count=count+(bd+i);
		printf("robot will fall in %d B",(count*t));
		break;
	}

}	
}
}

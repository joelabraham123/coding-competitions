#include<stdio.h>
#include<math.h>
unsigned long long fact(unsigned long long num);
int main()
{
	unsigned long long dim,ways,m;
	scanf("%lld",&dim);
	if(dim>0 && dim<=8)
	{
	m=3*dim;
	ways=(fact(m)/pow((fact(dim)),3));
	printf("%lld",ways);
	}
return(0);
}
unsigned long long fact(unsigned long long num)
{
	if(num==0)
	return 1;
	else
	return (num*fact(num-1));
}
